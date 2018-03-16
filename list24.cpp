

void levelOrder(node * root) {

      queue<node *> ar;

    if(root){

        ar.push(root);

        while(!ar.empty()) {

            node *tmp;

            tmp=ar.front();

            ar.pop();

            cout<<tmp->data<<" ";

            if(tmp->left!=NULL)

            ar.push(tmp->left);

            if(tmp->right!=NULL)

            ar.push(tmp->right);  

        }    

    }   

}

