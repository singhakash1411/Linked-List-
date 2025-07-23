#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;

    Node(int data1, Node*next1){ //constructor
        data= data1;
        next= next1;
    }// you can creat multiple constructor inside the list 
    Node(int data1){
        data=data1;
        next=NULL;
    }
};
int main(){
    vector<int> arr= {1,2,3,4,5};
    Node* nodename= new Node(arr[0]);
    cout<<nodename<<"\n";
    cout<<nodename->data<<"\n";
}