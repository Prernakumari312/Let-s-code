#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the size of yhe array";
    cin>>n;
    int arr[n];
    int i;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }


    cout<<"the element of the array are";
    for(i=0;i<n;i++){
        cout<<arr[i];
    }
}