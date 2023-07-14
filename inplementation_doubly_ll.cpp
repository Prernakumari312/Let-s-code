#include<iostream>
using namespace std;


class Node{
    public:
    int val;
    Node* prev;
    Node* next;

    Node(int data){
        val=data;
        prev=NULL;
        next=NULL;
    }
};

class Doublylinkedlist{
   public:
   Node*head;
   Node*tail;
   Doublylinkedlist(){
    head=NULL;
    tail=NULL;
   }
};

int main(){
    Node* new_node=new Node(3);

    Doublylinkedlist dll;
    dll.head =new_node;
    dll.tail=new_node;

    cout<<dll.head->val<<endl;

    return 0;
}