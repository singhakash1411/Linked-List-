#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node* back;

    Node(int data1, Node* next1, Node* back1) {
        data = data1;
        next = next1;
        back = back1;
    }

    Node(int data1) {
        data = data1;
        next = NULL;
        back = NULL;
    }

    Node* convArr2ll(vector<int>& arr) {
        Node* head = new Node(arr[0]);
        Node* mover = head;
        for (int i = 1; i < arr.size(); i++) {  
            Node* temp = new Node(arr[i]);
            mover->next = temp;
            temp->back = mover;  
            mover = temp;
        }
        return head;
    }

    void Print(Node* head) {
        while (head) {
            cout << head->data << " ";
            head = head->next;
        }
        cout << endl;
    }

    Node* reverseLL(Node* head) {
        if (head == NULL || head->next == NULL) return head; //this is edge case where the head may be 0 or only

        Node* curr = head;
        Node* temp = NULL;

        while (curr) {
            temp = curr->back;
            curr->back = curr->next;
            curr->next = temp;
            curr = curr->back;
        }

        return temp->back;  // New head will be back of temp okk
    }
};

int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 6};
    
    Node n(0);  // Temporary object to access member functions

    Node* head = n.convArr2ll(arr);

    cout << "Original list: ";
    n.Print(head);

    head = n.reverseLL(head);

    cout << "Reversed list: ";
    n.Print(head);

    return 0;
}
