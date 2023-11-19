#include <iostream>
using namespace std;


//ITRATIVE SOLUTION 

Node* reverseLinkedList(Node* head){
    if(head==NULL || head->next==NULL){
        return head
    }
    Node* prev = NULL;
    Node* curr = head;
    Node* forward = NULL;
    
    while(curr != NULL){
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
    }
}

//RECURSIVE SOLUTION

void reverse(Node* &head, Node* &curr, Node* prev){
    //base case
    if(curr == NULL){
        head = prev;
        return;
    }
    Node* forward = curr->next;
    reverse(head,forward,curr);
    curr->next=prev;
}

int main() {

    return 0;
}