#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char, int> Count;
        for (char c : s) {
            Count[c]++;
        }

        for (int i = 0; i < s.size(); i++) {
            if (Count[s[i]] == 1) {
                return i;
            }
        }
        return -1;
    }
};