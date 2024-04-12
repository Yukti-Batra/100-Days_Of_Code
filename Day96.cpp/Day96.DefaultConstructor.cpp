#include<iostream>
using namespace std;
class Hero{
    public:
        int health;
        char level;

    //default constructor
    Hero(){
        cout<<" Constructor called"<<endl;
    }

};
int main(){
    Hero h;
    cout<<"Size of h is : "<<sizeof(h);
    
    //these are object of default constructor
    Hero *h1 = new Hero;
    Hero *h2 = new Hero();    //chahe Hero() likho yaa Hero likho same hai
    cout<<h2->health<<endl;
    cout<<" Size of h1 is : "<<sizeof(h1);  //always 8

}