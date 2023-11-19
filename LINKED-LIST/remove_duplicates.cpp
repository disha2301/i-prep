
//SORTED LINKEDLIST
Node* uniqueSortedList(Node* head){
    //empty list
    if(head == NULL){
        return NULL;
    }
    //non empty list
    Node* curr = head;
    while(curr!=NULL){
        if(curr->next!=NULL && curr->data== curr->next->data){
            Node* next_next = curr->next->next;
            Node* nodeTodelete = curr->next;
            delete(nodeTodelete);
            curr->next= next_next;
        }
        else{
            curr = curr->next;
        }
    }
}

//UNSORTED LINKEDLIST
//logic 1 to traverse the entire
curr = head
while(curr != NULL){
    Node* temp = curr->next;
    while(temp!=NULL)
    {
        if(curr == temp){
            delete
        }
        else{
            temp=temp->next;
        }
    }
}
O(N2) since 2 loops

//LOGIC 2 sort krlona by O(nlogn) then sorted ka lagga do with TC O(nlogn)


//LOGIC 3 map use krlona with TC O(n)

