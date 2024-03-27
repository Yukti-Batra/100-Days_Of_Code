#include<iostream>
#include<string>
using namespace std;
bool Check(string& str,int start,int end){
    cout<<" i is "<<start<<" j is "<<end<<endl;
    //base case
    if(start>end){
        return true;
    }
    //processing
    if(str[start]!=str[end])
        return false;
    //recursion
    else 
        return Check(str,++start,--end);
}
int main(){
    string str;
    cin>>str;
    bool isPalindrome=Check(str,0,str.length()-1);
    if(isPalindrome){
        cout<<"Yessss";
    }
    else{
        cout<<"Nooooo";
    }
}