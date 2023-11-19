// using fast and slow

Node* floydDetectLoop(Node* head){
    if(head==NULL){
        return false;
    }
    Node* slow = head;
    Node fast = head;
    while (slow!=NULL && fast!=NULL){
        fast = fast -> next;
        if(fast!=NULL)
        fast = fast->next;
        
        slow = slow->next;
        if(slow==false)
        return true;
    }
    return false;
}
Node* getStartingNode(Node* head){
    if(head==NULL){
        return NULL;
    }
    NODE* intersection =floydDetectLoop(head);
    Node* slow = head;
    while (slow != intersection){
        slow = slow->next;
        intersection = intersection ->next;
    }
    return slow;
}
void removeLoop(Node* head){
    if(head == NULL)
    return;
    Node* startLoop = getStartingLoop(head);
    Node* temp = startLoop;
    while(temp->next!=startLoop){
        temp=temp->next;
    }
    temp -> next = NULL;
}