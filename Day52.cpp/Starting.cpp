#include<bits/stdc++.h>
using namespace std;
int main(){
    // initialise pointer like this
    int num=5;
    int *p=&num;
    cout<<*p++<<endl;//aese bhi value 5 print hori hai but try to use (*p)
    *p=*p+1;
    cout<<*p<<endl;
    cout<<p<<endl;
    p=p+1;//yee 1 plus nah krega, balki 4 plus krega bcz int ka size 4 hai
    cout<<p<<endl;
    char ch='w';
    char *h=&ch;
    cout<<h<<endl;
    h=h+1;
    cout<<h; //this works in int 
    Or this
    int *ptr=0;
    ptr=&num;
    int a=*ptr;
    a++;
    cout<<"a is "<<a<<" while num is "<<num<<endl;
    // but if we change *ptr, the value of num will change
    (*ptr)++;  // this increses num by 1
    (*p)++;    // this also increases num by 1  
     cout<<"Address of num is "<<p<<endl;
    *p++;  //this increases the address of num, not the original value
     cout<<"Address of num is "<<p<<endl;
    cout<<"Value of num is "<<num<<endl;
    cout<<"Address of num is "<<&num<<endl;
    cout<<"Value of num is "<<*p<<endl;
    cout<<"Value of num is "<<num<<endl;
    double n=4.3;
    double *p1=&n; 

    Copy one pointer to other
    int *q=p;
    cout<<p<<"- "<<q<<endl;
    cout<<*p<<"-"<<*q<<endl;
    return 0;
}