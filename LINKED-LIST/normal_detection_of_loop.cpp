//map<Node*, bool> visited;
#include<map>
bool isCircular(Node* head){
    //empty list
    if(head==NULL){
        return true;
    }
    Node* temp = head->next;
    while(temp != NULL && temp !=head){
        temp = temp->nextl
    }
    if(temp==head){
        return true;
    }
    return false;
}
bool detectLoop(Node* head){
    if(head == NULL){
        return false;
}
map<Node*, bool> visited;
Node* temp = head;
while(temp!=NULL){
    
    //cycle is present
    if(visited[temp]== true)
    return 1;
    
    visited[temp]=true;
    temp=temp->next;
}
return false;
