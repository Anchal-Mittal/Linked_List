//=========================================deleting an element from linked list exist at tail===========================================

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
  
//==================================deleting an element from the tail===================================================

void List :: deleteElement(){
    cout << "\nDELETING FROM THE TAIL" << endl;
    if(head==NULL){
      cout << "LIST IS ALREADY EMPTY " << endl;
      return; 
    }
    else{
        int el;
        Node *temp=head;
        while(temp->next!=tail)
              temp=temp->next;
        el=tail->info;     
        delete tail;
        tail=temp;
        temp->next=NULL;
        cout << "THE DELETED ELEMENT IS  "<<el << endl;
        
        
    }
    
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
