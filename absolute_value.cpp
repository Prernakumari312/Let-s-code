#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"enter the number ";
    cin>>num;
    if(num<0){
        num=-(num);
        cout<<num;


    }
    else{
        cout<<num;
    }
    return 0;
}