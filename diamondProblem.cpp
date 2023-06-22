#include<iostream>
using namespace std;

class f{
   
   public:
   f(){
    cout<<"F class"<<endl;
   }


};

class e:public f{
    public:
    e(){
        cout<<" e class"<<endl;
    }
};

class d:public f{
    public:
    d(){
        cout<<" d class"<<endl;
    }
};

class b:public e{
    public:
    b(){
        cout<<" B class"<<endl;
    }
};

class c:public d{
    public:
    c(){
        cout<<" c class"<<endl;
    }
};

class a:public b,public c{
    public:
    a(){
        cout<<"a class"<<endl;
    }
};

int main(){
    a a1;
}


