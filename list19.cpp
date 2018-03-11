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
    
    void sort();

};

//=========================================================Sort the linked list================================================

void List ::sort(){
	int min;
  
	Node *node=head;
	
  Node *poi;
	
  Node *curr;
	
  while(node->next!=NULL){
	
     min=node->info;
	 
     poi=node;
		 
     curr=node->next;
		 
     while(curr!=NULL){
			 
       if(min>curr->info){
				
          min=curr->info;
			
          poi=curr;
				
        }
       
       curr=curr->next;
       
      }
     
     poi->info=node->info;
     
     node->info=min;
	   
     node=node->next;
			}
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
cout <<endl; 
}



//=====================================================main function====================================================

int main(){

    List list;

    list.insertElement();

    list.traverse();

    cout << "THE SORTED LIST IS "<< endl;
    
    list.sort();

    list.traverse();



return 0;

}
