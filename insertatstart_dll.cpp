#include<iostream>
using namespace std;

class Node{
    public:
      int val;
      Node*prev;
      Node*next;

      Node(int data){
        val=data;
        prev=NULL;
        next=NULL;

      }
};

class doublylinkedlist{
    public:
    Node*head;
    Node*tail;
    doublylinkedlist(){
        head=NULL;
        tail=NULL;

    }
    void insertststart(int val){
        Node* new_node= new Node(val);
        if(head==NULL){
            head=new_node;
            tail=new_node;
            return;

        }

        new_node->next=head;
        head->prev=new_node;
        head=new_node;
        return;
    }

    void display(){
        Node*temp=head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp=temp->next;
        }
    }
};



int main(){
    doublylinkedlist dll;
    dll.insertststart(1);
    dll.insertststart(2);
    dll.insertststart(3);
    dll.display();
    return 0;
}