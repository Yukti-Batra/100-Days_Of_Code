#include <iostream>
#include <cmath>

using namespace std;

class Solution {
public:
    int pivotInteger(int n) {
        // Calculate the total sum of numbers from 1 to n
        int y = n * (n + 1) / 2;
        
        // Find the potential square root of y (our pivot x)
        int x = sqrt(y);
        
        // Check if x is indeed the pivot
        return (x * x == y) ? x : -1;
    }
};

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;

    Solution sol;
    int pivot = sol.pivotInteger(n);

    cout << "The pivot integer is: " << pivot << endl;

    return 0;
}