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

  void delete_duplicate(Node* &head){
      Node* curr_node=head;

      while(curr_node!=NULL){
        while(curr_node->next!=NULL && curr_node->val==curr_node->next->val){
            Node* temp=curr_node->next;
            curr_node->next=curr_node->next->next;
            free(temp);


        }
        curr_node=curr_node->next;
        
      }
  }

};




int main(){
  linkedlist ll;
  ll.insertattail(1);
  ll.insertattail(2);
  ll.insertattail(2);
  ll.insertattail(3);
  ll.insertattail(3);

  ll.display();
  ll.delete_duplicate(ll.head);
  ll.display();
  return 0;

}