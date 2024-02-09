#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> aGroups;        
        for (const string& str : strs) {
            string sorted = str;
            sort(sorted.begin(), sorted.end());            
            aGroups[sorted].push_back(str);
        }
        vector<vector<string>> result;
        for (auto& pair : aGroups) {
            result.push_back(pair.second);
        }        
        return result;
    }
};