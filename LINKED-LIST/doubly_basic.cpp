#include <iostream>
using namespace std;
class Node{
    public:
    int data ;
    Node* prev;
    Node* next;
    
    //constructore
    Node(int d){
        this->data=d;
        this->prev=NULL;
        this->next=NULL;
    }
    ~Node(){
        int val = this->data;
        if(next!=NULL){
            delete next;
            next=NULL;
        }
        cout<<"memory free for node with data "<<val<<endl;
    }
};
void print(Node* head){
    Node* temp =head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
//gives length of the Linked List
int getLength(Node* head){
    int len =0;
    Node* temp=head;
    while(temp!=NULL){
        len++;
        temp=temp->next;
    }
    return len;
}
void insertAtHead(Node* tail,Node* &head,int d){
    
//empty list
    if(head==NULL){
        Node* temp=new Node(d);
        head = temp;
        tail=temp;
    }
    else{
        Node* temp= new Node(d);
        temp->next=head;
        head->prev=temp;
        head=temp;
    }
}
void insertAtTail(Node* &tail,Node* &head,int d){
    if(tail==NULL){
        Node* temp = new Node(d);
        tail=temp;
        head=temp;
    }
    else{
           Node* temp=new Node(d);
        tail->next=temp;
        temp->prev=tail;
        tail=temp;
    }
}
void insertAtPosition(Node* &tail, Node* &head, int pos, int d){
    
    //insert at start
    if(pos==1){
        insertAtHead(tail,head,d);
        return;
    }
    
    Node* temp=head;
    int cnt=1;
    while(cnt<pos-1){
        temp=temp->next;
        cnt++;
    }
    //creating a Node for d
    Node* nodeToInsert = new Node(d);
    nodeToInsert -> next = temp -> next;
    temp ->next->prev=nodeToInsert;
    temp -> next = nodeToInsert;
    nodeToInsert->prev=temp;
}

void deleteNode(int pos, Node* &head){
    //deleting first or start node
    if(pos==1){
        Node* temp= head;
        temp->next->prev=NULL;
        head=temp->next;
        temp->next=NULL;
        delete temp;
    }
    else{
        //deleting any middle node or last node
        Node* curr = head;
        Node* prev = NULL;
        int cnt=1;
        while(cnt < pos){
            prev = curr;
            curr = curr->next;
            cnt++;
        }
        curr->prev = NULL;
        prev -> next = curr ->next;
        curr -> next = NULL;
    }
}

int main(){
    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;
    
    print(head);
    cout<<getLength(head)<<endl;
    
    insertAtHead(tail,head, 11);
    print(head);
    insertAtHead(tail,head, 14);
    print(head);
    insertAtHead(tail,head, 115);
    print(head);
    
    insertAtTail(tail,head,14);
    print(head);
    
    insertAtPosition(tail,head,2, 100);
    
    deleteNode(1,head);
    print(head);
}