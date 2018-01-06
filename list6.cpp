//=====================================deleting an element at a given position from linked list=========================

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
    void deleteElement();
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
  
//===================================delete the element at given position================================================

void List :: deleteElement(){
    int POSITION;
    if(head==NULL){
      cout << "LIST IS ALREADY EMPTY " << endl;
      return; 
    }
         Node *temp=head;
         cout << "ENTER THE POSITION AT WHICH DO U WANT TO DELETE AN ELEMENT" <<endl;
         cin >> POSITION;
         if(POSITION==1){
             head=head->next;
             delete temp;
             return ;
         }
        int count=0; 
        Node *prev=head;
        while((count !=(POSITION-1))&&(temp!=NULL)){
               prev=temp;
               temp=temp->next;
               ++count;
        }
         
        if(temp!=NULL){
          prev->next=temp->next;
          delete temp;
        return;
        }
        cout << "THE  ELEMENT DO U WANT TO DELETE  IS NOT EXIST " << endl;
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
    list.deleteElement();
    list.traverse();
return 0;
}
