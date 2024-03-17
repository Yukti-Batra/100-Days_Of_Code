#include<iostream>
using namespace std;
class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int result=0;
        for(char a: jewels){
            for(char b: stones){
                if(a==b) 
                result++;
            }
        }
        return result;
    }
};