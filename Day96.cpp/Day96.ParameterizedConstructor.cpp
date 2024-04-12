#include<iostream>
using namespace std;
class Hero{

    int health;
    public:
    Hero(int health){
        cout<<" this -> "<<this;    // same as address of object
        this-> health=health;   // this has address of object and says ki object ki health mein input wali health daal do
    }
};
int main(){
    Hero h(10);
    cout<<" Address of h is "<<&h;

}