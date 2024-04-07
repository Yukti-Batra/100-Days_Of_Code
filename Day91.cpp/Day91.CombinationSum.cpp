#include<iostream>
using namespace std;
class Solution {
private:
    void combinationSumHelper(const vector<int>& candidates, int target, int start, vector<int>& current, vector<vector<int>>& result) {
        if (target == 0) {
            result.push_back(current);
            return;
        }
        for (int i = start; i < candidates.size(); ++i) {
            if (candidates[i] <= target) {
                current.push_back(candidates[i]);
                combinationSumHelper(candidates, target - candidates[i], i, current, result);
                current.pop_back(); 
            }
        }
    }
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> result;
        vector<int> current;
        combinationSumHelper(candidates, target, 0, current, result);
        return result;
    }
};