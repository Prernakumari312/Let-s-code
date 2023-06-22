#include<iostream>
using namespace std;

class Parent{
    public:
    Parent(){
        cout<<"Parent class"<<endl;

    }


};

class child:public Parent{
    public:
    child(){
        cout<<"child class"<<endl;
    }
};

class grandchild:public child{
    public:
    grandchild(){
        cout<<"grandchild";
    }
};

int main(){
    grandchild gc;
}