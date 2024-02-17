#include <iostream>
#include <string>

using namespace std;

string Reduced_String(int k, string s) {
    int n = s.length();
    
    int top = -1;
    int count[n];

    for (int i = 0; i < n; ++i) {
        if (top >= 0 && s[i] == s[top]) {
            count[top]++; 
        } else {
            s[++top] = s[i]; 
            count[top] = 1; 
        }

        if (count[top] == k) {
            top--; 
        }
    }

    string result = "";
    for (int i = 0; i <= top; ++i) {
        result += string(count[i], s[i]);
    }

    return result;
}

int main() {
    int k;
    cin>>k;
    string s;
    cin>>s;
    cout<<Reduced_String(k,s);
    return 0;
}
