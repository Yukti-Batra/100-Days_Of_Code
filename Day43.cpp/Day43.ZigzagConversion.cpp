#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string convert(string s, int numRows) {
        if( numRows == 1 )
        {
            return s;
        }
        string str[numRows];
        int r = 0;
        bool incr = true;
        for ( int i = 0; i < s.length(); i++ )
        {
            str[r] += s[i];
            if( r == numRows-1 )
            {
                incr = false;
            }
            if( r == 0 )
            {
                incr = true;
            }
            if( incr )
            {
                r++;
            }
            else
            {
                r--;
            }
        }
        string ans;
        for( auto row : str )
        {  
            ans += row;
        }
        return ans;
    }
};