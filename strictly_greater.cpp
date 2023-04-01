#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v(6);
    for(int i=0;i<v.size();i++){
        cin>>v[i];

    }
    cout<<"enter the x";
    int X;
    cin>>X;
    int count=0;
    for(int i=0;i<v.size();i++){
        if(v[i]>X){
            count++;
        }
    }
    cout<<count<<endl;
}