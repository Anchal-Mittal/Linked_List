bool has_cycle(Node* head) {
    Node *temp=head;
    Node *pred=head;
        while(temp && pred->next && pred){
            temp=temp->next;
            pred=pred->next->next;
            if(temp==pred)
                    return 1;
            
           }
        return 0;
}
