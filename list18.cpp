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

    void Sort();

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



//==================================sort an element =========================================================================



void List ::  Sort(){

    if(head==NULL){
	

        cout <<"SORRY THE LIST IS ALREADY EMPTY "<< endl;
   }


    else if(head==tail)

        return;



    else{

    Node *current=head->next;

    Node *prev =head;
    int count=0;
    while(prev!=NULL){
    	count++;
    	prev=prev->next;
	}
	count=count/2;
	int i=0;

    while(i!=count){
    	prev=head;
    	current=head->next;
		while(current!=NULL){
         if(current->info<prev->info)
         {
         	int temp=current->info;
         	current->info=prev->info;
         	prev->info=temp;
		 }
          prev=prev->next;
          current=current->next;
      }
          i++;
    }

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

    list.Sort();

    list.traverse();

return 0;

}
