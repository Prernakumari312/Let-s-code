#include<iostream>
#include<set>
using namespace std;

int main(){
    set<int>set1;
    set1.insert(4);
    set1.insert(3);
    set1.insert(2);
    set1.insert(1);
    cout<<set1.size()<<endl;
    set1.insert(4);
     cout<<set1.size()<<endl;
   

   set<int>::iterator itr;

   for(itr=set1.begin(); itr!=set1.end();itr++){
       cout<<*itr<<" ";
   }cout<<endl;


   for(auto value:set1){
    cout<<value<<" ";
   }cout<<endl;
     

}