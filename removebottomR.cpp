#include<iostream>
#include<stack>
using namespace std;
  
  
void f(stack<int>&st){
    if(st.size()==1){
        st.pop();
        return ;
        
    }
    int curr=st.top();
    st.pop();
    f(st);
    st.push(curr);
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
    
    cout<<"after  removal";
    f(st);
    print(st);
    
}