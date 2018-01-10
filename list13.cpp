//========================================= linked list===========================================

#include <iostream>
#include<cstdio>
using namespace std;

//===========================================creating a node===========================================================

class Node {
  public:
    int info;
    Node *next;
    Node(int el, Node *n=0){
        info=el;
        next=n;
    }
};

//=================================================creating a list======================================================

class List{
    public:
    int count=0;
    Node *head;
    Node *tail;
    List(){
        head=tail=NULL;
    }
    void insertElement();
    void traverse();
    void length(Node  *head);
};

//========================================================insert the element ===========================================

void List :: insertElement(){
    char ch;
    int info;
    do{
      cout << "ENTER THE ELEMENT DO U WANT TO INSERT " << endl;
      cin >> info;
      if(head==NULL)
          head=tail=new Node(info);
      else
          head=new Node(info,head);
      cout << "IF U WANT TO INSERT MORE ELEMENT " << endl;
      cin >> ch;
    }while(ch== 'Y'|| ch=='y');
  }
  
//=================================================length of the list===================================================================
void List ::length(Node *head){
    if(head==NULL){
        cout << "THE LENGTH OF THE LIST =" << count<< endl;
        return ;
    }
  else {
    count++;
    length(head->next);
  }
} 

//====================================================traversev a list===================================================================

void List :: traverse(){
    Node *node = head;
    while(node !=NULL){
       cout << node ->info << " ->";
       node =node->next;
    }
}

//=====================================================main function===================================================================
int main(){
    Node *head=NULL;
    List list;
    list.insertElement();
    list.traverse();
    list.length(list.head);
  

return 0;
}
