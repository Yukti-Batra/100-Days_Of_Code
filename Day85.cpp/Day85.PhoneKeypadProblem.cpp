#include<bits/stdc++.h>
using namespace std;
class Solution {
    private:
    void solve(string digits,int index,vector<string> &ans,string output,string arr[]){
        //base case
        if(index>=digits.length()){
            ans.push_back(output);
            return ;
        }
        int number=digits[index]-'0';
        string value=arr[number];
        for(int i=0;i<value.length();i++){
            output.push_back(value[i]);
            solve(digits,index+1,ans,output,arr);
            output.pop_back();
        }
    }
public:
    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        string output;
        if(digits.length()==0){
            return ans;
        }
        int index=0;
        string arr[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        solve(digits,index,ans,output,arr);
        return ans;
    }
};