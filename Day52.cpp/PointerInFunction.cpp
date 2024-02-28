#include<iostream>
using namespace std;
void print(int *p){
    cout<< *p<<endl;
}
void update(int *p){
    p=p+1;
    p=p+1;
    cout<<p<<endl;
}
int main(){
    int value=5;
    int *p=&value;
    // print(p);
    cout<<"before update "<<p<<endl;
    update(p);                          // p did not change qki update functin mein copy of p jaati hai, asli p nhi 
    cout<<"after update "<<p;
    // print(p);
    return 0;
}