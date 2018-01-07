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
    void reverseList();
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
  
//===================================reverse the list===================================================================
void List :: reverseList(){
     Node* prev   = NULL;
     Node* current = head;
     Node* next;
    while (current != NULL){
        next  = current->next;  
        current->next = prev;   
        prev = current;
        current = next;
    }
    head = prev;
    
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

//=====================================================main function====================================================
int main(){
    List list;
    list.insertElement();
    list.traverse();
    list.reverseList();
    list.traverse();

return 0;
}
