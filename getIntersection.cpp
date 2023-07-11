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

int getlength(Node*head){
    Node*temp=head;
    int length=0;
    while(temp!=NULL){
        length++;
        temp=temp->next;
    }
    return length;
}

Node* moveHeadbyk(Node*head,int k){
    Node*ptr=head;
    while(k--){
        ptr=ptr->next;
    }
    return ptr;

}


Node* getIntersection(Node* head1,Node*head2){
    int l1=getlength(head1);
    int l2=getlength(head2);
    Node* ptr1;
    Node*ptr2;

    if(l1>l2){
        int k=l1-l2;
        ptr1=moveHeadbyk(head1,k);
        ptr2=head2;
    }
    else{
        int k=l2-l1;
        ptr1=head1;
        ptr2=moveHeadbyk(head2,k);
    }

    while(ptr1){
        if(ptr1==ptr2){
            return ptr1;
        }
        ptr1=ptr1->next;
        ptr2=ptr2->next;
    }

    return NULL;
}

int main(){
    linkedlist ll1;
    ll1.intsertAtTail(1);
    ll1.intsertAtTail(2);
    ll1.intsertAtTail(3);
    ll1.intsertAtTail(4);
    ll1.intsertAtTail(5);
    ll1.display();

    linkedlist ll2;
    ll2.intsertAtTail(6);
    ll2.intsertAtTail(7);
    ll2.head->next->next=ll1.head->next->next->next;

    ll2.display();

    Node* intersection=getIntersection(ll1.head,ll2.head);
    if(intersection){
        cout<<intersection->val<<endl;

    }
    else{
        cout<<"-1";
    }
    return 0;
}