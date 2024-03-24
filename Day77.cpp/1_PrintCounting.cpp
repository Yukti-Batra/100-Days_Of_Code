#include<iostream>
using namespace std;
int count(int n){
    if(n==0)
        return 0;                          
    cout<<n<<endl;
    return count(n-1);
}
void print(int n){
    if(n==0){
      return ;
    }
    //recursive function
    print(n-1);                              
    cout<<n<<endl;
}
int main(){
    int n;
    cin>>n;
    count(n);
    // print(n);
}