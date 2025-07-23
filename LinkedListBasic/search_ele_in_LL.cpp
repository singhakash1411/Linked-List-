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

Node* convertArr2LL(vector<int> & arr){ 
    if (arr.empty())return nullptr;

   Node* head = new Node(arr[0]); 
   Node* mover = head;
   for(int i=1; i<arr.size();i++) {  
    Node* temp= new Node(arr[i]);  
    mover->next=temp;
    mover= temp;
   }
   return head;
    
}
// travarsal to find the element in LL
int  search(Node* head, int target){
    Node* temp = head;
    while(head !=NULL){
        if(temp->data == target){
            cout<< " The target is found ";
            return 1;
        }    
        temp= temp->next;
    }
    cout<< " The target is not found means not there :";
    return 0;
}
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
    int Search =search(head, 3);
    //print(head);
    cout<<  Search <<endl;

}