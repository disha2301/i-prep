//brute approach 

int getLength(Node* head){
    int len=0;
    while(head != Null){
        len++;
        head = head->next;
    }
    return head;
}

Node* findMiddle(Node* head){
    int len = getLength(head);
    int ans = (len/2);
    Node* temp = head;
   int cnt=0;
   while(cnt<ans){
       temp = temp->next;
       cnt++;
   }
    return temp;
}

//optimal approach
Node* getmiddle(Node* head){
    if(head == NULL)
    return head;
    
    if( head->next ==NULL){
        return head;
    }
    
    //2 nodes
    if(head->next->next===NULL){
        return head->next;
    }
    
    Node* slow = head;
    Node* fast = head->next;
    while(fast != NULL){
        fast = fast->next;
        if(fast!=NULL){
            fast = fast->next;
        }
        slow = slow->next;
    }
    return slow;
}