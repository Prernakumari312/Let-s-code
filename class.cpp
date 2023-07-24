#include<iostream>
using namespace std ;
class animal{
    private:
    int weight ;
    public:
    int age;
    string type ;
    void eat(){
        
        cout<<"eating "<<endl;


    }

    void sleep(){
        cout<<"sleeping "<<endl;

    }

    int getweight(){
        return weight;

    }

    void setweight(int w){
        weight=w;
    }
};

int main(){
    animal ramesh;
    ramesh.age=12;
    ramesh.type="liom";

    cout<<"age of ramesh is"<<ramesh.age<<endl;
    cout<<"type of ramesh is "<<ramesh.type<<endl;

    ramesh.eat();
    ramesh.sleep();

    ramesh.setweight(101);
    cout<<"weight"<<ramesh.getweight()<<endl;




}