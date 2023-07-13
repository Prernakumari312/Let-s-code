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


Node* rotatebykth(Node* &head,int k){
    int n=0;
    Node* tail=head;

    while(tail->next){
        n++;
        tail=tail->next;
    }
    n++;

    k=k%n;
    if(k==0){
        return head;

    }

    tail->next=head;

    Node* temp=head;
    for(int i=1;i<n-k;i++){
        temp=temp->next;
    }

    Node*newnode=temp->next;
    temp->next=NULL;
    return newnode;
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
    ll.head=rotatebykth(ll.head,3);
    ll.display();
    return 0;
}