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


bool check_same_ll(Node* head1, Node* head2){
    Node*ptr1=head1;
    Node*ptr2=head2;

    while(ptr1!=NULL && ptr2!=NULL){
        if(ptr1->val!=ptr2->val){
            return false;
        }
        ptr1=ptr1->next;
        ptr2=ptr2->next;

    }

    return(ptr1==NULL && ptr2==NULL);

}
int main(){
    linkedlist  ll1;

    linkedlist ll2;

    ll1.intsertAtTail(1);
    ll1.intsertAtTail(2);
    ll1.intsertAtTail(3);


    ll2.intsertAtTail(1);
    ll2.intsertAtTail(2);
    ll2.intsertAtTail(3);

    ll1.display();
    ll2.display();

    cout<<check_same_ll(ll1.head,ll2.head);
    return 0;



}