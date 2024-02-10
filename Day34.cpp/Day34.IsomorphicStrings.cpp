#include <iostream>
#include <unordered_map>

using namespace std;

bool areIsomorphic(string str1, string str2) {
    if (str1.length() != str2.length()) {
        return false;
    }

    unordered_map<char, char> mapping;
    unordered_map<char, bool> visited;

    for (int i = 0; i < str1.length(); i++) {
        char c1 = str1[i];
        char c2 = str2[i];

        // If c1 is already mapped, check if it's mapped to the same character in str2
        if (mapping.find(c1) != mapping.end()) {
            if (mapping[c1] != c2) {
                return false;
            }
        } else {
            // If c1 is not mapped, check if c2 is already used in str2
            if (visited[c2]) {
                return false;
            }

            // Map c1 to c2
            mapping[c1] = c2;
            visited[c2] = true;
        }
    }

    return true;
}

int main() {
    string str1 = "aab";
    string str2 = "xxy";

    if (areIsomorphic(str1, str2)) {
        cout << "Output: 1" << endl;
    } else {
        cout << "Output: 0" << endl;
    }

    return 0;
}
