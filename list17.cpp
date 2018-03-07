

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
    void shifthead();

};

//======================================================shift the mid node at head =====================================

void List::shifthead(){
Node *node=head;
int count=0;
while(node!=NULL){
	count++;
	node=node->next;
}
count=count/2;
node =head;
Node *temp=NULL;
int i=0;
while(i!=count){	
temp=node;
node=node->next;
i++;
}
temp->next=node->next;
node->next=head;
head=node;

}

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



//=============================================traversev a list=========================================================



void List :: traverse(){

    Node *node = head;

    while(node !=NULL){

       cout << node ->info << " ->";

       node =node->next;

    }
cout << endl;
}





int main(){

    List list;

    list.insertElement();

    list.traverse();

    list.shifthead();
    
    list.traverse();

return 0;

}
