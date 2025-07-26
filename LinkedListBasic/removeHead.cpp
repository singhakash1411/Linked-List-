Node* removeHead(Node* head){
    // firstly check if only one node is there or may be no node ,then delete it only 
    if(head == NULL || head->next == NULL){
        delete head;
        return NULL;
    }
    Node* temp = head; 
    head = head->next; // head ke next node ko head bana do . make head->next node as node and delete temp
    delete temp; 
    return head;

}
 