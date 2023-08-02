#include<iostream>
#include<stack>
#include<queue>
using namespace std;

class Queue{
    stack<int>st;
    public:
     Queue(){

     }

     void push(int x){
        this->st.push(x);

     }
     void pop(){
        if(this->st.empty()){
            stack<int>temp;
            while(this->st.size()>1){
                temp.push(st.top());
                st.pop();
            }
            this->st.pop();
            while(! temp.empty()){
                this->st.push(temp.top());
                temp.pop();
            }
        }
     }

     bool empty(){
        return this->st.empty();
        

     }
     int front(){

        int result;
         if(this->st.empty()){

            return -1;
            stack<int>temp;
            while(this->st.size()>1){
                temp.push(st.top());
                st.pop();
            }
            result = this->st.top();
            while(! temp.empty()){
                this->st.push(temp.top());
                temp.pop();
            }
        }

        return result;
     }
};

int main(){
    queue<int> qu;
    qu.push(10);
    qu.push(20);
    qu.push(30);
    qu.push(40);
    qu.pop();
    while(! qu.empty()){
        cout<<qu.front()<<" ";
        qu.pop();
    }
    return 0;
}