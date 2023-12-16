APPROACH - ITERATIVE AND USING LOOPS

USING LOOPS
Node* reverseLinkedList(Node * head){
    if(head->next==NULL){
        return head;
    }
    Node* prev = NULL;
    Node* curr = head;
    Node* forward = NULL;
    while(curr!=NULL){
        forward = curr->next;
        curr->next=prev;
        prev = curr;
        curr = forward;
    }
    return prev;
}
TIME - O(N)
SPACE - o(1)

USING RECURSION
void reverse(Node* head, Node* curr, Node* prev){
    if(curr == NULL){
        head= prev;
        return;
    }
    Node* forward = curr->next;
    reverse(head,forward,curr);
    curr->next = prev;
}
Node* reverseLinkedList(Node * head){
    Node* curr = head;
    Node* prev = NULL;
    return reverse(head,curr,prev);
}