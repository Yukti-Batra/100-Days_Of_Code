#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isValid(string s) {
        vector<char> stack;
    for (char ch : s) {
        if (ch == '(' || ch == '[' || ch == '{') {
            stack.push_back(ch);
        } 
        else {
            if (stack.empty()) {
                return false; 
            }
            char topElement = stack.back();
            stack.pop_back();
            if ((ch == ')' && topElement != '(') ||
                (ch == ']' && topElement != '[') ||
                (ch == '}' && topElement != '{')) {
                return false;
            }
        }
    }
    return stack.empty(); 
    }
