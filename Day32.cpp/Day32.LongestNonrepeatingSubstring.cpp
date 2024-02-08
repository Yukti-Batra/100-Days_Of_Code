#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int>arr;
        int head=0,tail=0;
        int ans=INT_MIN;
        for(head=0;s[head]!='\0';head++)
        {
            while(arr[s[head]]>0)
            {
                ans=max(ans,head-tail);
                arr[s[tail]]--;
                tail++;
            }
            arr[s[head]]++;
        }

        ans=max(ans,head-tail);

        return ans;
    }
};