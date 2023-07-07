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
    Node* head;

    linkedlist(){
        head=NULL;

    }

    void insertattail(int val){
        Node* new_node=new Node(val);
        if(head==NULL){
           head=new_node;
           return ;
        }

        Node*temp=head;
        while(temp->next!=NULL){
            temp=temp->next;

        }
        temp->next=new_node;
    }

  void display(){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->val<<"->";
        temp=temp->next;

    }
    cout<<NULL<<endl;
  }

};

Node* reversell(Node* &head){
    Node*prevptr =NULL;
     Node*currptr =head;

     while(currptr!=NULL){
        Node* nextptr=currptr->next;
        currptr->next=prevptr;
        prevptr=currptr;
        currptr=nextptr;

     }

     Node* new_node=prevptr;
     return new_node;

}

 int main(){
  linkedlist ll;
  ll.insertattail(1);
  ll.insertattail(2);
  ll.insertattail(3);
  ll.insertattail(4);
  ll.insertattail(5);

  ll.display();

  ll.head= reversell(ll.head);

   ll.display();
  
  return 0;

}