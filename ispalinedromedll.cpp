#include<iostream>
using namespace std;

class Node{
    public:
      int val;
      Node*prev;
      Node*next;

      Node(int data){
        val=data;
        prev=NULL;
        next=NULL;

      }
};

class doublylinkedlist{
    public:
    Node*head;
    Node*tail;
    doublylinkedlist(){
        head=NULL;
        tail=NULL;

    }
    void insertatend(int val){
        Node* new_node=new Node(val);
        if(tail==NULL){
            head=new_node;
            tail=new_node;
            return;
        }
        tail->next=new_node;
        new_node->prev=tail;
        tail =new_node;
        return;
    }

   

   

     
    void display(){
        Node*temp=head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
};

 bool ispalinedromedll(Node* head,Node* tail){
        while(head!=tail && tail!=head->prev){
            if(head->val!=tail->val){
                return false;

            }
            head=head->next;
            tail=tail->prev;
        }

        return true;
    }


int main(){
    doublylinkedlist dll;
    dll.insertatend(1);
    dll.insertatend(2);
    dll.insertatend(3);
    dll.insertatend(2);
    dll.insertatend(1);
    dll.display();
    cout<<ispalinedromedll(dll.head,dll.tail)<<endl;
     return 0;
}