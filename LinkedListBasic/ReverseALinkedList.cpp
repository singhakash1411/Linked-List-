//here the code will be only of the function not the header and main 
Node* reverse(Node* head){

    // sput the element into the stack because ofk last in first out 
    stack<int>st;
    Node* temp = head;
    while(temp){
        st.push(temp->data);
        temp = temp->next;
    }
     
    // ab bahar nikal lo and appoint in place of temp 
    temp= head;
    while(temp ){
        temp->data = st.top();
        st.pop();
        temp = temp->next;

    }
    return head;
}

// just by reversing the pointers not the data , and here ww will do it by changing each Node

Node* reverse(Node* head){
    Node* temp =head;
    Node* prev = NULL;
    while(temp != NULL){
        Node* front = temp->next;
        temp->next = prev;
        prev= temp;
        temp= front;
    }
    return prev;
}