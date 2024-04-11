// In this question, we are given 1 to 5 ki array jinme se ek element repeat hora hai and we have to find which
#include<iostream>
using namespace std;
int main(){
    int arr[5]={1,2,3,4,2};
    int ans1;
    for(int i=0;i<5;i++){
        ans1=ans1^arr[i];
    }
    int ans2;
    for(int i=0;i<5;i++){
        ans2=ans2^i;
    }
    int answer =ans1^ans2;
    cout<<answer;
}