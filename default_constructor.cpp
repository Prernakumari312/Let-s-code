#include<iostream>
using namespace std;

class Animal{
    private:
    int weight;
     
     public:
     int age ;
     string type;


     void eat(){
        cout<<"Eating "<<endl;

     }
     void sleep(){
        cout<<"sleeping "<<endl;
     }


     Animal(){
        this->weight=0;
        this->age=0;
        this->type="";
        cout<<"contructor is called"<<endl;
     }


     

     int getweight(){
        return weight;

     }

     void setweight(int w){
        weight =w;

     }

};

int main(){
    Animal a;
    
    a.age=17;
    a.eat();
    a.sleep();
    a.setweight(12);
     
    //dynamically constructor is being called
    Animal*b=new Animal();

}