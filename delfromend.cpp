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

    void insertatpostion(int val,int k){
        Node* temp=head;
        int count =1;
        while(count<k-1){
            temp=temp->next;
            count++;
        }

        Node* new_node=new Node(val);
        new_node->next=temp->next;
        temp->next=new_node;

        new_node->prev=temp;
        new_node->next->prev=new_node;

        return ;
    }

    void delfromsend(){
        if(head==NULL){
            return;

        }

        Node*temp=tail;
        tail=tail->prev;
        if(tail==NULL){
            head=NULL;

        }

        else{
            tail->next=NULL;

        }
        free(temp);
        return ;
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



int main(){
    doublylinkedlist dll;
    dll.insertatend(1);
    dll.insertatend(2);
    dll.insertatend(3);
    dll.display();
    dll.insertatpostion(4,3);
    dll.display();
    dll.delfromsend();
    dll.display();

    
    
    return 0;
}