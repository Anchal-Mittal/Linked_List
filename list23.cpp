
    int height(Node* root) {
        int leftcount=-1;
        int rightcount=-1;
        Node *temp=root;
       
       while(temp!=NULL){
             leftcount++;
             temp=temp->left;
       }
       
       Node *temp1=root;
         while(temp1!=NULL){
             rightcount++;
             temp1=temp1->right;
        }
        
        if(leftcount>rightcount)
            return leftcount;
        
    return rightcount;     
    }
