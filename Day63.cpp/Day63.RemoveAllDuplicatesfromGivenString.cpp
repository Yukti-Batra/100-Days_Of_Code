#include <iostream>
#include <unordered_set>

string removeDuplicates(const string& str) {
    string result = "";
    unordered_set<char> seen;

    for (char ch : str) {
        if (seen.find(ch) == seen.end()) {
            seen.insert(ch);
            result += ch;
        }
    }

    return result;
}

int main() {
    string input1 = "geEksforGEeks";
    string output1 = removeDuplicates(input1);
    cout << "Input: " << input1 << "\nOutput: " << output1 << "\n\n";

    string input2 = "HaPpyNewYear";
    string output2 = removeDuplicates(input2);
    cout << "Input: " << input2 << "\nOutput: " << output2 << "\n";

    return 0;
}
