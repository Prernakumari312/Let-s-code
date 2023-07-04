#include<iostream>
using namespace std;

class Node{
  public:
    int val;
    Node* next;

    Node(int data){
        val =data;
        next =NULL;

    }
};
class linkedList{
    public:
      Node* head;

      linkedList(){
        head=NULL;

      }
      void insertAttail(int value){
        Node* new_node =new Node(value);
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
        while(temp!=NULL){
            cout<<temp->val<<"->";
            temp=temp->next;
        }
        cout<<"NULL"<<endl;
        
      }

     
};

void deleteAlternateNodes(Node* &head){
    Node*curr_node=head;
    while(curr_node!=NULL && curr_node->next!=NULL){
        Node* temp=curr_node->next;
        curr_node->next=curr_node->next->next;
        free(temp);
        curr_node=curr_node->next;
    }
}

int main(){
    linkedList ll;
    ll.insertAttail(1);
    ll.insertAttail(2);
    ll.insertAttail(3);
    ll.insertAttail(4);
    ll.insertAttail(5);
    ll.insertAttail(6);
    ll.display();
    deleteAlternateNodes(ll.head);
    ll.display();
    return 0;
    
    
}