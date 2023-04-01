#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,34,56,7};
    int max=arr[0];
    for(int i=0;i<6;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    cout<<max<<endl;
}