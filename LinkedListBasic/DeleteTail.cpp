#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* next;

    Node(int data1, Node* next1 = NULL) {
        data = data1;
        next = next1;
    }
};

// Converting  array to linked list
Node* convertArr2LL(vector<int> &arr) {
    if (arr.empty()) return nullptr;

    Node* head = new Node(arr[0]);
    Node* mover = head;
    for (int i = 1; i < arr.size(); i++) {
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

// Print linked list
void print(Node* head) {
    while (head) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

// Delete tail node
Node* deleteTail(Node* head) {
    if (!head || !head->next) {
        delete head;
        return nullptr;
    }

    Node* temp = head;
    while (temp->next->next != NULL) {
        temp = temp->next;
    }
    delete temp->next;
    temp->next = nullptr;
    return head;
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    Node* head = convertArr2LL(arr);

    cout << "Original list: ";
    print(head);

    head = deleteTail(head);  
    cout << "After deleting tail: ";
    print(head);

    head = deleteTail(head);  
    cout << "After deleting tail again: ";
    print(head);

   

    return 0;
}
