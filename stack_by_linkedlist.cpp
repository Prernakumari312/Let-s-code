#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node*next;

    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};

class stack{
    Node*head;
    int capacity;
    int currsize;
    public:
    stack(int c){
        this->capacity=c;
        this->currsize=0;
        head=NULL;
    }

    bool isempty(){
        return this->head==NULL;
    }

    bool isfull(){
        return this->currsize==this->capacity;
    }

    void push(int data){
      if(this->currsize==this->capacity){
        cout<<"overflow"<<endl;
        return;
      }
      Node*new_node= new Node(data);
      new_node->next=this->head;
      this->head=new_node;
      this->currsize++;


    }

    int pop(){
       if(this->head==NULL){
        cout<<"Underflow"<<endl;
        return INT16_MIN;
       } 
       Node*new_node=this->head->next;
       this->head->next=NULL;
       Node* toberemoved=this->head;
       int result=toberemoved->data;
       delete toberemoved;
       this->head=new_node;
       return result;
    }
    int gettop(){
        if(this->head==NULL){
            cout<<"underflow"<<endl;
            return INT16_MIN;


        }

        return this->head->data;

    }

    int size(){
        return this->currsize;

    }
};

int main(){
    stack st(5);
    st.push(1);
    st.push(2);
    st.push(3);
    cout<<st.gettop()<<endl;

    st.push(4);
    st.push(5);
    cout<<st.gettop()<<endl;

    st.pop();
    cout<<st.gettop()<<endl;
    

        
         
        return 0;

}