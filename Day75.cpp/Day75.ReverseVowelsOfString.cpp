#include<iostream>
#include<unordered_set>
#include<algorithm>
using namespace std;
class Solution {
public:
    string reverseVowels(string s) {
    unordered_set<char> vowels{'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
    int i = 0, j = s.length() - 1;
    while (i < j) {
        if (vowels.count(s[i]) && vowels.count(s[j])) {
            swap(s[i], s[j]);
            i++;
            j--;
        } else if (vowels.count(s[i])) {
            j--;
        } else if (vowels.count(s[j])) {
            i++;
        } else {
            i++;
            j--;
        }
    }
    return s;
    }
};