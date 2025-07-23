#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;

    Node(int data1, Node*next1){ 
        data= data1;
        next= next1;
    } 
    Node(int data1){
        data=data1;
        next=NULL;
    }
};

Node* convertArr2LL(vector<int> & arr){ // dynamically vector creation 
    if (arr.empty())return nullptr;

   Node* head = new Node(arr[0]); // assign the first element as the head beacuse the first array element should be starting head
   Node* mover = head;
   for(int i=1; i<arr.size();i++) { // start from 1 to avoid duplcate value withhead 
    Node* temp= new Node(arr[i]); // storing the element in temp 
    mover->next=temp;
    mover= temp;
   }
   return head;
    
}
// Now to print the linked list we need to write a Print function
void print(Node* head){
    while(head){
        cout<<head->data << " ";
        head= head->next;
    }
    cout <<endl;
}

int main(){
    vector<int> arr= {1,2,3,4,5};
    Node* head = convertArr2LL(arr);
    print(head);

}