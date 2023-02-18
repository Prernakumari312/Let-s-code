#include<iostream>
using namespace std;
int main()
{
    int n,i,num ,pos;
    cout<<"enter the size of the array";
    cin>>n;
    int arr[n];
    cout<<"enter the element of the array";
    for(i=0;i<n;i++){
        cin>>arr[i];

    }
    cout<<"the element of the array befor insertion ";
    for(i=0;i<n;i++){
        cout<<arr[i];
    }
    cout<<"enter the position ";
    cin>>pos;
    cout<<"enter the number";
    cin>>num;
    if(pos<0||pos>n+1){
        cout<<"Invalid position";
    }
    else{
        for(i=n-1;i>=pos;i--){
            arr[i+1]=arr[i];
        }
        arr[pos-1]=num;
        n++;
    }
    cout<<"array after insertion of new element";
    for(i=0;i<n;i++){
        cout<<arr[i];
    }

} 
