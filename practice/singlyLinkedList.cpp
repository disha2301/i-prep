#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    
    
    //constructor
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
    
    ///destructor
    ~Node(){
        int value = this->data;
        //memory free
        if(this->next !=NULL){
            delete next;
            this->next=NULL;
        }
        cout<<"memory is free for node with data"<<value<<endl;
    }
};

void insertAtHead(Node* &head, int d){
    //new node
    Node* temp = new Node(d);
    temp->next = head;
    head = temp;
}

void print(Node* &head){
    Node* temp = head;
    cout<<temp->data<<" ";
    while(temp!=NULL){
        temp = temp->next;
    }
    cout<<endl;
}

void insertAtTail(Node* &tail,int d){
    Node* temp = new Node(d);
    tail->next = temp;
    tail = temp;
}

void insertAtPosition(Node* &tail,Node* &head,int position, int d){
    //inserting at the start
    if(position == 1){
        insertAtHead(head,d);
        return;
    }
    Node* temp = head;
    int cnt = 1;
    while(cnt<position-1){
        temp = temp->next;
        cnt++;
    }
    
    //insert at last
    if(temp->next==NULL){
        insertAtTail(tail,d);
        return;
    }
    //creating a node for d 
    Node* nodetoInsert = new Node(d);
    nodetoInsert ->next = temp->next;
    temp->next = nodetoInsert;
}

void deleteNode(Node* &head, int position){
    //deleting start node
    if(position ==1 ){
        Node* temp = head;
        head=head->next;
        delete temp;
        
    }
    //deleting middle or end node
    else{
        Node* curr = head;
        Node* prev = NULL;
        int cnt=1;
        while(cnt<position){
            prev=curr
            curr=curr->next;
            cnt++
        }
        prev->next=curr->next;
        delete curr;
        0
        
    }
}
int main(){
    //created a new node
    Node* node1=new Node(10);
    cout<< node1 -> data << endl;
    cout<< node1 -> next << endl;
    
    //head pointed to node1
    Node* head = node1;
    Node* tail = node1;
    print(head);
    insertAtHead(head,12);
    print(head);
    insertAtTail(tail,13);
    print(tail);
    insertAtPosition(tail,head,1,22);
    print(head);
    return 0;
}