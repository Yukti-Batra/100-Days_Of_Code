#include<iostream>
using namespace std;
//Empty class ke case mein size 1 aega jo object ko denge memory usko zinda dikhane ke liye

class Hero{               //class is a user defined data type
    //properties
    private:
    char level ;
    int age;
    public:
    int health=4;
    // char level;
    //getter
    char getlevel(){
        return level;
    }
    int GetAge(){
        return age;
    }
    //setter
    void Set(int am){
        am=age;
    }
    void SetAge(int age){
        this->age=age;
    }
    void Setlevel(char l){
        level=l;
        //setter will help when we need to use any specific condition...for example when only a specific user can aplly changes, or the changes can be made when we enter a specific password
        /*
        if(name=='A'){
            level=l;
        }*/ 
    }

};
// Hero Mario;    //Hero type ka ek object bna diya Mario
int main(){
    Hero h1;
    cout<<"size of class Hero : "<<sizeof(h1)<<endl;
    // cout<<"level of hero is "<<h1.level;    //private cannot be accesssed out of class
    //to access this we will use getter , setter.
    h1.Setlevel('A');
    cout<<"level of hero is "<<h1.getlevel()<<endl;
    cout<<"Health of hero is : "<<h1.health<<endl;  //access using dot operator;
}