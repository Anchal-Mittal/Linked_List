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
    void deleteLastOccurrenceElement();
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

void List ::  deleteLastOccurrenceElement(){
    int element;
    cout << "ENTER THE ELEMENT DO U WANT TO DELETE" << endl;
    cin >> element;
    if(head==NULL)
        cout <<"SORRY THE LIST IS ALREADY EMPTY "<< endl;

    else if((head==tail)&&(head->info==element))
        head=tail= NULL;

    else{
    Node *current =head;
    Node *prev  =NULL;
    while(current!=NULL){
        if(current->info==element)
            prev=current;
        current=current->next;
    }
    current=head;
    while(current->next!=prev)
            current=current->next;
    Node *temp=current->next;
    current->next=prev->next;
    delete temp;
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
    list.deleteLastOccurrenceElement();
    list.traverse();
return 0;
}
