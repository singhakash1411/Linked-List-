Node* removeKth(Node* head, int k) {
    if (head == NULL) return NULL;

    if (k == 1) {
        Node* temp = head;
        head = head->next;
        delete temp;
        return head;
    }

    int count = 1;
    Node* curr = head;
    Node* prev = NULL;

    while (curr != NULL && count < k) {
        prev = curr;
        curr = curr->next;
        count++;
    }

    if (curr != NULL) {
        prev->next = curr->next;
        delete curr;
    }

    return head;
}
