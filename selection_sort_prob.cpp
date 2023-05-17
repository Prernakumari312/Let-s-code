#include<iostream>
#include<string.h>
using namespace std;

void selectionsort(char fruit[][60],int n){
  for(int i=0;i<n-1;i++){
    int min_index=i;
    for(int j=i+1;j<n;j++){
        if(strcmp(fruit[min_index],fruit[j]))
        {
            min_index=j;
        }
    }
    if(i!=min_index)
    
        swap(fruit[i],fruit[min_index]);
    
  }
  for(int i=0;i<n;i++)
  {
    cout<<fruit[i]<<" ";

  }
  cout<<endl;
  
}

int main(){
    char fruit[][60]={"papaya","lime","watermelon","apple","mango","kiwi"};
    int n=sizeof(fruit)/sizeof(fruit[0]);
    selectionsort(fruit,n);
    return 0;
}