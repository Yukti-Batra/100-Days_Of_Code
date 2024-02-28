#include<iostream>
using namespace std;
int main(){
    int arr[10]={0};
    //ERROR occurs when you write:
    // arr=arr+1;
    int *p=&arr[0];
    cout<<p<<endl;
    p=p+1;
    cout<<p;

    cout<<"Address of first location is "<<arr<<endl;
    cout<<"Address of first location is "<<&arr[0]<<endl;

    cout<<"Value at first index is "<<arr[0]<<endl;
    cout<<"Value at first index is "<<*arr<<endl;
    cout<<"Incremented value of first index is "<<*arr+1<<endl;
    cout<<"Incremented value of first index is "<<(*arr)+1<<endl;

    cout<<"Value at next index is "<<*(arr+1)<<endl;
    cout<<"Value at next index is "<<arr[1]<<endl;
    // FORMULAE arr[i]=*(arr+i)
    // OR i[arr]=*(i+arr)

    int i=3;
    cout<<"Element at index 3 with new approach "<<i[arr]<<endl;
    cout<<"Next element with new approach "<<i[arr+1]<<endl;
   
 
    int *ptr=&arr[0];
    cout<<&ptr<<endl;
    cout<<" ptr -> "<<ptr<<" arr -> "<<arr<<" &arr -> "<<&arr<<endl;;
    cout<<" *ptr-> "<<*ptr<<" *arr->  "<<*arr<<endl;

    int *p=arr;
    cout<<"value at index 0 is "<<*(p+1);
    cout<<"value at index 0 is "<<*p;

}