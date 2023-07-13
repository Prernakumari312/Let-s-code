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

bool ispalindrome(Node* head){
    Node* slow=head;
    Node* fast=head;

    while(fast&& fast->next){
        slow=slow->next;
        fast=fast->next->next;
    }

    Node*curr=slow->next;
    Node*prev=slow;
    slow->next=NULL;


    while(curr){
        Node*nextnode=curr->next;
        curr->next=prev;
        prev=curr;
        curr=nextnode;
    }

    Node*head1=head;
    Node*head2=prev;

    while(head2){
        if(head1->val!=head2->val){
            return false;
        }

        head1=head1->next;
        head2=head2->next;
    }

    return true;
}



int main(){
    linkedlist ll;
    ll.intsertAtTail(1);
    ll.intsertAtTail(2);
    ll.intsertAtTail(3);
    ll.intsertAtTail(3);
    ll.intsertAtTail(2);
    ll.intsertAtTail(1);

    ll.display();
    cout<<ispalindrome(ll.head)<<endl;
    return 0;
    

    

    

    

}