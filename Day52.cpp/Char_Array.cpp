#include<iostream>
using namespace std;
int main(){
    int arr[5]={1,2,3,4,5};
    cout<<arr<<endl;
    char ch[6]="abcde";
    cout<<ch<<endl; //variable prints entire string
    char *c=&ch[0];
    cout<<c<<endl; //pointer prints enitre string

    char hi='o';//should give ajeeb si value kuch bhi 
    char *ptr=&hi;
    cout<<ptr;

    char *ch='abcde';  //we can do this but don't do this 
}