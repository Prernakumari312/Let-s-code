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

void reversedprint(Node*head){
    if(head==NULL){
        return;
    }
    reversedprint(head->next);
    cout<<head->val<<" ";

}


  int main(){
  linkedlist ll;
  ll.insertattail(1);
  ll.insertattail(2);
  ll.insertattail(2);
  ll.insertattail(3);
  ll.insertattail(3);

  ll.display();

  reversedprint(ll.head);
  ll.display();
  
  return 0;

}