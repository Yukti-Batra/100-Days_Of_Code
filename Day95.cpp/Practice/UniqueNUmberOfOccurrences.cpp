//In this question we have array and we have to check which two numbers repeat same number of time or no one
#include<bits/stdc++.h>
#include<vector>
using namespace std;
//THIS QUESTION REQUIRED A LOT OF HELP TO SEE

class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        // int i=0;
        // sort(arr.begin(),arr.end());
        // vector<int> ans;
        //     while(i<arr.size()){
        //     int count=1;
        //     for(int j=i+1 ; j<arr.size();j++){
        //         if(arr[i]==arr[j])
        //             count++;
        //     } 
        //      ans.push_back(count);
        //          i=i+count;       
        // }
        // sort(ans.begin(),ans.end());
        // for(int i=0;i<ans.size()-1;i++){
        //     if(ans[i]==ans[i+1])
        //         return false;
        // }
        // return true;
        
        sort(arr.begin(), arr.end());
        vector<int> v;
        for(int i = 0; i< arr.size(); i++){
            int count = 1;
            while( i + 1 < arr.size() && arr[i] == arr[i+1]){
                count++;
                i++;
            }
            v.push_back(count);
        }
        sort(v.begin(), v.end());
        for(int i = 1; i<v.size(); i++){
            if(v[i] == v[i - 1]){
                return false;}
        }
        return true;
    };
};

int main() {
    vector<int> ans = {1,2,3,4,5};
    Solution a;
    bool b = a.uniqueOccurrences(ans);
    if(b) {
        return true;
    }
    if(!b) {
        return false;
    }
    return 0;
}