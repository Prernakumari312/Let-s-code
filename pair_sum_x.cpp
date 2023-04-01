#include<iostream>
using namespace std;
int main(){
    int arr[]={3,4,6,7,1};
    int target_sum=7;
    int size=5;
    int pair=0;
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i]+arr[j]==target_sum)
            {
                pair++;

            }
        }
    }
    cout<<pair;
}