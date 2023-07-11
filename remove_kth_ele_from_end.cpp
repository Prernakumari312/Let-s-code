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

void removekthelefromend(Node* &head,int k){
    Node* ptr1=head;
    Node* ptr2=head;

    int count=k;
    while(count--){
        ptr2=ptr2->next;
    }

    if(ptr2==NULL){
        Node*temp=head;
        head=head->next;
        free(temp);
        return;
    }

    while(ptr2->next!=NULL){
        ptr1=ptr1->next;
        ptr2=ptr2->next;
    }

    Node* temp=ptr1->next;
    ptr1->next=ptr1->next->next;
    free(temp);
    return;
}


int main(){
    linkedlist ll1;
    ll1.intsertAtTail(1);
    ll1.intsertAtTail(2);
    ll1.intsertAtTail(3);
    ll1.intsertAtTail(4);
    ll1.intsertAtTail(5);
    ll1.intsertAtTail(6);
    ll1.display();
    removekthelefromend(ll1.head,3);
    ll1.display();
}