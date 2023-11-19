//RECURSION

Node* Kreverse(Node* head, int k){
    if(head==NULL){
        return NULL;
    }
    //step 1: reverse first K nodes
    Node* next = NULL;
    Node* curr = head;
    Node* prev = NULL;
    int count = 0;
    while ( curr != NULL && count < k){
        next = curr->next;
        curr->next=prev;
        prev=curr;
        count++;
    }
    //step 2 ; recursion dekhlega aage ka
    if(next != NULL){
        head ->next= Kreverse(next,k);
    }
    //step 3: return head of reversed list
    return prev;
}