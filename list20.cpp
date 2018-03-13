

#include <iostream>

#include<cstdio>

#include<cstdlib>

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

    void Remove_dublicate();

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



//==================================remove dublicate from an element from the tail===================================================



void List :: Remove_dublicate(){

Node *temp=head;
Node *curr =NULL;
 if(temp==NULL)
     return;
 while(temp->next!=NULL){
     if(temp->info==temp->next->info){
         curr=temp->next->next;
         free(temp->next);
         temp->next=curr;
      }
     else
   temp=temp->next;
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

    List list1;

    list1.insertElement();

    list1.traverse();

    list1.Remove_dublicate();

    list1.traverse();

return 0;

}
