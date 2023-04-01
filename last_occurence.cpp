#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v(6);
    for(int i=0;i<v.size();i++)
    {
        cin>>v[i];
    }
    cout<<"enter the X";
    int X;
    cin>>X;
    int occurence =-1;
    for(int i=0;i<v.size();i++){
         if(v[i]==X){
            occurence=i;
         }
    }
    cout<<occurence<<endl;
    return 0;

}