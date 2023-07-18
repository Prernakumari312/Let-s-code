#include<iostream>
using namespace std;

class Node{
    public:
      int val;
      Node*next;

      Node(int data){
        val=data;
        next=NULL;

      }

};

class circularlinkedlist{
    public:
    Node*head;
    circularlinkedlist(){
        head=NULL;
    }

    void insertAtstart(Node* &head,int val){
        Node*new_node=new Node(val);
        if(head==NULL){
            head=new_node;
            new_node->next=head;
            return;
        }
        Node*tai
    }
}
