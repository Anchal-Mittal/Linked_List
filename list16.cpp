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
    void deleteNthNode();
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

void List ::  deleteNthNode(){
    int k;
    cout << "ENTER WHICH NODE DO  WANT TO DELETE" << endl;
    cin >> k;
    Node *pev=head;
    int count=0;
    while(pev!=NULL){
        count++;
        pev=pev->next;
    }
    if(head==NULL)
        cout <<"SORRY THE LIST IS ALREADY EMPTY "<< endl;

    else{
    Node *current=head;
    Node *prev =head;
    int i=0;
    while(i!=(count-k)){
          prev=current;
          current=current->next;
          i++;
        }
    
    prev->next=current->next;
    delete current;
    }
        
}

//=============================================traversev a list=========================================================

void List :: traverse(){
    Node *node = head;
    while(node !=NULL){
       cout << node ->info << " ->";
       node =node->next;
    }
    cout << "\n";
}


int main(){
    List list;
    list.insertElement();
    list.traverse();
    list.deleteNthNode();
    list.traverse();
return 0;
}
