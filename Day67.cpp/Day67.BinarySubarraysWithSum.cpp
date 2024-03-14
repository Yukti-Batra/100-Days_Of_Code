#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int numSubarraysWithSum(vector<int>& nums, int goal) {
    unordered_map<int, int> prefixSumCount;
    int sum = 0, count = 0;

    for (int num : nums) {
        prefixSumCount[sum]++;
        sum += num;
        count += prefixSumCount[sum - goal];
    }

    return count;
}

int main() {
    vector<int> nums = {1, 0, 1, 0, 1};
    int goal = 2;

    cout << numSubarraysWithSum(nums, goal) << endl;

    return 0;
}