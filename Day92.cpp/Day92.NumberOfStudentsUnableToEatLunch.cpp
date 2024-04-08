#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int n = students.size();
        int left = 0, right = n - 1;
        int unableToEat = 0;

    while (left <= right) {
        if (students[left] == sandwiches[0]) {
            sandwiches.erase(sandwiches.begin());
            unableToEat = 0;
            left++;
        }
        else {
            unableToEat++;
            rotate(students.begin() + left, students.begin() + left + 1, students.end());
            if (unableToEat == n - left) {
                break;
            }
        }
    }
    // return sandwiches.size();
    return unableToEat;
    }
};