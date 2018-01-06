//========================================= deleting a given element in a given linked list===========================================

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

//=============================================deleting the given element ==============================================

void List :: deleteElement(){
    int element;
    if(head==NULL){
      cout << "LIST IS ALREADY EMPTY " << endl;
      return; 
    }
         Node *temp=head;
         cout << "ENTER THE ELEMENT DO U WNAT TO DELETE " <<endl;
         cin >> element;
         if(head->info==element){
             head=head->next;
             delete temp;
             return ;
         }
         
        while((temp->next->info!=element)&&(temp!=NULL))
               temp=temp->next;
         
        if(temp!=NULL){
          Node *teemp= temp->next;
          temp->next=temp->next->next;
          delete teemp;
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
