//===============================creating a linked list uisng struct and c function======================================

#include <iostream>
#include<cstdio>
using namespace std;

struct Node{
    int info;
     struct Node *next;
};

//============================================traverse the list==========================================================

void print(struct Node *node){
   while(node !=NULL){
       cout<<node->info << "->";
       node=node->next;
   }
}

//==============================================================main function==============================================

int main(){
     struct Node *head=(struct Node*) malloc(sizeof(struct Node*));
     struct Node *second =(struct Node*) malloc(sizeof(struct Node*));
     struct Node *tail=(struct Node* )malloc(sizeof(struct Node*));
     head->info=1;
     head->next=second;
     second->info=2;
     second->next=tail;
     tail->info=4;
     tail->next=NULL;
     print(head);
}
