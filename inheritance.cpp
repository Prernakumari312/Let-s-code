#include<iostream>
using namespace std;

class Animal{
    public:
    int age=23 ;
    int weight =24;

    void eat(){
        cout<<"Eating";
    }
};

class dog:public Animal{

};

int main(){
    dog d1;
    d1.eat();
    cout<<d1.age<<endl;
    cout<<d1.weight<<endl;
}