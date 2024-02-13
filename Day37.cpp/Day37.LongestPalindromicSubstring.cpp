#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string longestPalindrome(string s) {
        string ans = s.substr(0,1);
        for (int i = 0; i<s.length(); ++i){
            int start = i, end = i+1;
            while (end<s.length() && s[start]==s[end]){ed++;}
            if (ans.length()<ed-st) ans = s.substr(start, end-start);
            ed--;
            i = ed;
            while (start>=0 && end<s.length() && s[start]==s[ed]){start--; end++;}
            if (end-start-1>ans.length()) ans = s.substr(start+1, end-start-1);

        }
        return ans;
    }
}