#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    
    //constructor
    Node(int d){
        this->data = d;
        this->next = NULL;
    }
    ~Node(){
        int val=this->data;
        if(this->next != NULL){
            delete next;
            next = NULL;
        }
        cout<<"memory free for node with data "<<val<<endl;
    }
};
void insertNode(Node* &tail,int element, int d){
    
    //assuming that the element is present in the list
    
    //empty list
    if(tail == NULL){
        Node* newNode = new Node(d);
        tail = newNode;
        newNode ->next = newNode;
    }
    else{
        //non-empty list
        //assuming  that the element is present in the list
        
        Node* curr = tail;
        while(curr->data !=element){
            curr = curr -> next;
        }  
        //element found -> curr is representing element wala node
        Node* temp = new Node(d);
        temp-> next = curr->next;
        curr->next = temp;
    }
}

void deleteNode(Node* &tail, int value){
    //empty list
    if(tail==NULL){
        cout<<"List is empty";
    }
    else{
        //non-empty
        //assuming the value is present in the list
        Node* prev = tail;
        Node* curr = prev->next;
        while(curr ->data !=value){
            prev = curr;
            curr = curr->next;
        }
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
        
    }
}

void print(Node* tail){
    Node* temp = tail;
    do{
        cout<< tail->data<<" ";
        tail = tail->next;
    }while(tail!=temp);
    cout<<endl;
}

 int main(){
    Node* tail = NULL;
    //empty list me insert krre hai
    
    insertNode(tail, 5, 3);
    print(tail);
    
}