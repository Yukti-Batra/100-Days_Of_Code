#include <iostream>
#include <unordered_set>

using namespace std;

bool isPangram(string s) {
    unordered_set<char> alphabetSet;

    for (char c : s) {
        if (isalpha(c)) {
            alphabetSet.insert(tolower(c));
        }
    }

    return alphabetSet.size() == 26;
}

int main() {
    string s = "Bawds jog, flick quartz, vex nymph";

    if (isPangram(s)) {
        cout << "Output: 1" << endl;
    } else {
        cout << "Output: 0" << endl;
    }

    return 0;
}
