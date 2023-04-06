#include<iostream>
#include<vector>
using namespace std;
int sort_zeros_ones(vector<int>&v){
    int left_ptr=0;
    int right_ptr=v.size()-1;

    while(left_ptr < right_ptr)
    {
        if(v[left_ptr]==1 &&v[right_ptr]==0)
        {
            v[left_ptr]=0;
            v[right_ptr]=1;
            left_ptr++;
            right_ptr--;

        }
        if(v[left_ptr]==0)
        {
            left_ptr++;
        }
        if(v[right_ptr]==1){
            right_ptr--;
        }
    }
    return 0;
}

int main(){
    int n;
    cout<<"enter the size ";
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++){
        int ele;
        cin>>ele;
        v.push_back(ele);
    }
    sort_zeros_ones(v);
    for(int i=0;i<n;i++){
        cout<<v[i];

    }
    return 0;
}