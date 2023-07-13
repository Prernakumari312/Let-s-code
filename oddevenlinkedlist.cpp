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


Node* oddevenlinkedlist(Node* &head){
     if(head==NULL){
        return head;

     }
      

    Node* oddptr=head;
    Node* evenhead=head->next;
    Node* evenptr=evenhead;
    
    while(evenptr && evenptr->next){
        oddptr->next=oddptr->next->next;
        evenptr->next=evenptr->next->next;

        oddptr=oddptr->next;
        evenptr=evenptr->next;
    }

    oddptr->next=evenhead;
    return head;



}

int main(){
    linkedlist ll;
    ll.intsertAtTail(1);
    ll.intsertAtTail(2);
    ll.intsertAtTail(3);
    ll.intsertAtTail(4);
    ll.intsertAtTail(5);
    ll.intsertAtTail(6);
    ll.display();
    ll.head=oddevenlinkedlist(ll.head);
    ll.display();
    return 0;
}