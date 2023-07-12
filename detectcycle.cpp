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

bool detectcycle(Node*head){
    if(head==NULL){
        return false;
    }
    Node*slow=head;
    Node*fast=head;

    while(fast&& fast->next){
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast){
            cout<<slow->val<<endl;

            return true;
        }
    }

    return false;
}


int main(){
    linkedlist ll;
    ll.intsertAtTail(1);
    ll.intsertAtTail(2);
    ll.intsertAtTail(3);
    ll.intsertAtTail(4);
    ll.intsertAtTail(5);
    ll.intsertAtTail(6);
    ll.intsertAtTail(7);
    ll.intsertAtTail(8);
    ll.display();
    ll.head->next->next->next->next->next->next->next->next=ll.head->next->next;



   
    cout<<detectcycle(ll.head);
    return 0;

}