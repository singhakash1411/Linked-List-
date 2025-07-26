// only function will be here ,please check other code for the entire heeader and main function 
Node* removeNthfromEnd(Node* head, int n){
    Node* dummy = head;

    Node* fast = dummy;
    Node* slow = dummy;
    for(int i=0; i<= n ; i++){
        fast= fast->next;
    }

    while(fast != NULL){
        fast = fast->next;
        slow = slow->next;

        Node* temp = slow->next;
        slow->next = slow->next->next;
        delete temp;

        Node* newHead= dummy->next;
        delete dummy;
        return newHead;
    }
}