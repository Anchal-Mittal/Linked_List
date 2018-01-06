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
    Node *head;
    Node *tail;
    List(){
        head=tail=NULL;
    }
    void insertElement();
    void traverse();
    void search();
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
  
//=================================================search the given element=============================================
void List :: search(){
    int element;
    cout <<"\nENTER THE ELEMENT " <<endl;
    cin >> element;
    Node *temp =head;
    int count=1;
    while((temp!=NULL)&&(temp->info!=element)){
        count++;
        temp=temp->next;
    }
    
    if(temp!=NULL)
    cout << "THE GIVEN ELEMENT EXIST AT " << count;
    else
    cout <<"THE GIVEN ELEMENT IS NOT EXIST" << endl;
return;    
} 

//=============================================traversev a list=========================================================

void List :: traverse(){
    Node *node = head;
    while(node !=NULL){
       cout << node ->info << " ->";
       node =node->next;
    }
}


int main(){
    List list;
    list.insertElement();
    list.traverse();
    list.search();

return 0;
}
