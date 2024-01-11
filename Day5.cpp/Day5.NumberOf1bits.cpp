#include<iostream>
using namespace std;
class Solution {
public:
    int hammingWeight(uint32_t n) {
        int count=0;
        while(n!=0){
            //last digit checking(only true when 1 & 1 is condition )
            if(n&1){
                count++;
            }
            n=n>>1; //n is right shifted and now the last digit is changed
        }
        return count;
    }
};