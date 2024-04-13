#include<iostream>
using namespace std;
class Solution {
public:
    bool isThree(int n) {
        bool flag=false;
        int count=0;
        for(int i=1;i<=n;i++){
            if(n%i==0){
                count++;
            }
        }
         if(count==3){
            flag=true;
        }
        return flag;
    }
};