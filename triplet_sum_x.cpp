#include<iostream>
using namespace std;
int main(){
    int arr[]={3,1,2,4,0,6};
    int target_sum=5;
    int size=6;
    int triplete=0;
    //int size=6;
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            for(int k=j+1;j<size;j++){
                if(arr[i]+arr[j]+arr[k]==target_sum){
                    triplete++;
                }
            }
        }
    }
    cout<<triplete<<endl;
    return 0;
}