#include <bits/stdc++.h>
using namespace std;
bool checkPalindrome(string s) {
    int start = 0;
    int end = s.size() - 1;

    while (start <= end) {
        while (start <= end && !isalnum(s[start])) {
            start++;
        }

        while (start <= end && !isalnum(s[end])) {
            end--;
        }

        if (start <= end && tolower(s[start]) != tolower(s[end])) {
            return false;
        }
        else {
            start++;
            end--;
        }
    }

    return true;
}