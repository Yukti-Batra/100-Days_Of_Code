#include<iostream>
using namespace std;
int isdivisible7(string num){
        int n = num.length();
        int Digit = 0;
    for (int i = 0; i < n; i++) {
        Digit = Digit * 10 + (num[i] - '0');
        cout<<"in between last digit was"<<Digit<<endl;
        Digit = Digit % 7;
        cout<<Digit<<endl;
    }
    if(Digit==0){
        return 1;
    }
    else{
        return 0;
    }
};
