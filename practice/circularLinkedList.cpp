#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    //constructor
    Node(int d){
        this->data=d;
        this->next=NULL;
    }
    ~Node(){
        int value=this->data;
        if(this->next!=NULL){
            delete next;
            next=NULL;
        }
        cout<<"memory is free for the node with data"<<value<<endl;
    }
};
void print(Node* &tail){
    Node* temp = tail;
    while(tail->next!=temp){
        cout<<tail->data<<" ";
        tail=tail->next;
    }
    cout<<" ";
}
void insertNode(Node* &tail, int element, int d){
    //assuming that the element is present in the list
    
    if(tail==NULL){
        //empty list
        Node* newNode=new Node(d);
        tail=newNode;
        newNode->next=newNode;
    }
    else{
        //non empty list
        Node* curr = tail;
        while(curr->data!=element){
            curr=curr->next;
        }
        Node* temp = new Node(d);
        temp->next=curr->next;
        curr->next=temp;
    }
}
int main(){
    Node* tail = NULL;
    insertNode(tail,2,3);
    return 0;
}