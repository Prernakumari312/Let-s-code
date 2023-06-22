#include<iostream>
using namespace std;

class fruit{
    public:
      string name;
      string color;
};

int main(){
      fruit apple;
      apple.name="Apple";
      apple.color="Red";

      cout<<apple.name<<"-"<<apple.color<<endl;

      fruit *mango=new fruit();
      mango->name="Mango";
      mango->color="yellow";
      cout<<mango->name<<"-"<<mango->color<<endl;
}