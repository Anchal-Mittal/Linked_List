//===================================================== linked list======================================================================

#include <iostream>
#include<cstdio>
using namespace std;

//===========================================creating a node============================================================================

class Node {
  public:
    int info;
    Node *next;
    Node(int el, Node *n=0){
        info=el;
        next=n;
    }
};

//=================================================creating a list=======================================================================

class List{
    public:
    Node *head;
    Node *tail;
    List(){
        head=tail=NULL;
    }
    void insertElement();
    void traverse();
    void search(Node  *head, int key);
};

//========================================================insert the element ============================================================

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
  
//=====================================================search the list===================================================================
void List :: search(Node *head, int key){
    if(head==NULL){
        cout <<"ELEMENT IS NOT EXIST"<< endl;
        return ;
    }
    
    else if(head->info==key){
      cout << "ELEMENT EXIST"<< endl;
      return ;
   }
  
  else 
    search(head->next,key);
    
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
    int key;
    Node *head=NULL;
    List list;
    list.insertElement();
    list.traverse();
    cout << "ËNTER THE ELEMENT DO U WANT TO SEARCH "<< endl;
    cin >> key;
    list.search(list.head,key);
  

return 0;
}
