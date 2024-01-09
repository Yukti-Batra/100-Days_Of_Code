#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int current_child=0;
        int current_cookie=0;
        while(current_child<g.size() && current_cookie<s.size()){
            if(g[current_child]<=s[current_cookie]){
                current_child++;
            }
            current_cookie++;
        }
        return current_child;
    }
};