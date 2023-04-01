#include<iostream>
using namespace std;
int main(){
    int a[]={2,3,4,52,3};
    int ansum=0;
    for(int i=0;i<5;i++){
        if(i%2==0){
            ansum+=a[i];
        }
        else{
            ansum-=a[i];

        }
    }
    cout<<ansum<<endl;
    return 0;
}