#include<iostream>
using namespace std;

class parent1{
    public:
    parent1(){
        cout<<"Parent 1"<<endl;

    }
};

class parent2{
   public:
   parent2(){
    cout<<"Parent 2"<<endl;

   }
};


class child:public parent1,public parent2{
    public:
    child(){
        cout<<"child class";
    }
};

int main(){
    child c;
}