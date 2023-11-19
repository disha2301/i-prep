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