void List ::reverse(){
	
  Node *big=head;
	Node *end=head;
	int count=1;
	
  while(end->next!=NULL){
		end=end->next;
		count++;
	}
	
  for(int i=0;i<count/2;i++){
		int temp=end->info;
		end->info=big->info;
		big->info=temp;
		end=end->prev;
		big=big->next;
  }
  
}
