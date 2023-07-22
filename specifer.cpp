#include<iostream>
using namespace std;

class hero{

    public:
    int health;

    char level;

    



};

int main(){
   hero h1;
   h1.health=70;
   h1.level='A';



   cout<<sizeof(h1);

   cout<<"h1.health is "<<h1.health<<endl;
   cout<<"h1.level is "<<h1.level<<endl;

}