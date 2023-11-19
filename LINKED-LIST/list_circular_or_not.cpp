
//LOGIN 1
bool isCircularList(Node* head){
    //empty list
    if(head==NULL)
    return NULL;
    
    //single node
    if(temp->next==NULL){
        return false;
    }
    
    Node* temp = head->next;
    while(temp!=NULL &&  temp!=head){
        temp= temp->next;
    }
    if(temp==head){
        return true;
    }
    return false;
}

//LOGIC 2 - USING MAP USE KEY VALUE THAT IS VISITED OR NOT
BUT ISME BADA SPACE LETI HAI
