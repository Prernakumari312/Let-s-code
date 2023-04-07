#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"enter the size";
    cin>>m>>n;
     
     int a[m][n];
    cout<<"enter the element of the array";

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }

    int transpose[n][m];
    for(int i=0;i<n;i++){

        for(int j=0;j<m;j++){
            transpose[i][j]=a[j][i];
        }
    }

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<transpose[i][j]<<" ";

        }cout<<endl;
    }
    return 0;
}