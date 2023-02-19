#include<iostream>
#include<stdlib.h>
using namespace std;

struct node{
    int data;
    struct node *next;

};
int main(){
     node*head=NULL;
     head =(struct node*)malloc(sizeof(struct node));
    head -> data = 5;
    head -> next = NULL;
    cout<<head->data;
    return 0;

}