#include <iostream>
#include <unordered_map>

bool canMakeFrequenciesEqual(string s) {
    unordered_map<char, int> frequencyMap;

    // Count the frequency of each character in the string
    for (char c : s) {
        frequencyMap[c]++;
    }

    unordered_map<int, int> countMap; // Map to store the count of frequencies

    // Count the count of each frequency
    for (auto it : frequencyMap) {
        countMap[it.second]++;
    }

    // If there is only one frequency, then it's already valid
    if (countMap.size() == 1) {
        return true;
    }

    // If there are exactly two frequencies and one of them occurs only once,
    // then it's valid because we can remove that character
    if (countMap.size() == 2) {
        auto it = countMap.begin();
        int freq1 = it->first;
        int count1 = it->second;
        ++it;
        int freq2 = it->first;
        int count2 = it->second;

        return ((count1 == 1 && (freq1 == 1 || freq1 == freq2 + 1)) ||
                (count2 == 1 && (freq2 == 1 || freq2 == freq1 + 1)));
    }

    return false;
}

int main() {
    string s1 = "xyyz";
    string s2 = "xxxxyyzz";

    cout << canMakeFrequenciesEqual(s1) << endl; // Output: 1
    cout << canMakeFrequenciesEqual(s2) << endl; // Output: 0

    return 0;
}
