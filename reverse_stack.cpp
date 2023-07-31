#include<iostream>
#include<stack>
using namespace std;

void reverse(stack<int>&st){
    stack<int>t1,t2;
    while(not st.empty()){
        int curr=st.top();
        st.pop();
        t1.push(curr);

    }
     while(not t1.empty()){
        int curr=t1.top();
        t1.pop();
        t2.push(curr);
        
    }
     while(not t2.empty()){
        int curr=t2.top();
        t2.pop();
        st.push(curr);
        
    }
}

void print(stack<int>&st){
     while(not st.empty()){
        int curr=st.top();
        st.pop();
        cout<<curr<<endl;
    }
}

int main(){
    stack<int>st;
    st.push(1);
    st.push(2);
     st.push(3);
    st.push(4);
     st.push(5);
    st.push(6);
    reverse(st);
    print(st);
    

}