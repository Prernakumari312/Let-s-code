#include<iostream>
using namespace std;

class Node{
    public:
       int val;
       Node* next;

    Node(int data){
        val=data;
        next=NULL;
    }   
};

class linkedlist{
    public:
      Node*head;

      linkedlist(){
        head=NULL;
      }


void intsertAtTail(int val){
    Node* new_node=new Node(val);
    if(head==NULL){
        head=new_node;
        return;
    }
    Node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=new_node;
}

void display(){
    Node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->val<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

};

Node* findmiddlenode(Node* &head){
    Node* slow=head;
    Node* fast=head;

    while(fast!=NULL && fast->next!=NULL){
        slow = slow->next;
        fast= fast->next->next;
    }

    return slow;

}

int main(){
    linkedlist ll;
    ll.intsertAtTail(1);
    ll.intsertAtTail(2);
    ll.intsertAtTail(3);
    ll.intsertAtTail(4);
    ll.intsertAtTail(5);

    ll.display();
     Node* middleNode=findmiddlenode(ll.head);
     cout<<middleNode->val;
    return 0;

}