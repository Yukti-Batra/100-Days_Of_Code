#include<iostream>
using namespace std;
void Digit(int n,string arr[]){
    if(n==0){
        return;
    }
    int temp=n%10;
    n=n/10;
    Digit(n,arr);
    cout<<arr[temp]<<endl;
}
int main(){
    string arr[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    int n;
    cin>>n;
    Digit(n,arr);
}

// THIS CAN ASLO BE DONE BY MAPPING
#include<iostream>
#include<unordered_map>
using namespace std;
void Digit(int n,unordered_map<int,string> &digit){
    if(n==0){
        return ;
    }
    int temp=n%10;
    n=n/10;
    Digit(n,digit);
    cout<<digit[temp]<<" ";
}
int main(){
    unordered_map<int, string> digit={{0,"zero"},{1,"one"},{2,"two"},{3,"three"},{4,"four"},{5,"five"},{6,"six"},{7,"seven"},{8,"eight"},{9,"nine"}};
    int n;
    cin>>n;
    Digit(n,digit);
}