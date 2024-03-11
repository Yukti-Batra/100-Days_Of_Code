#include <iostream>
using namespace std;

const int SIZE = 3;

int countPairs(int mat1[][SIZE], int mat2[][SIZE], int n, int x) {
    int r1 = 0, c1 = 0;
    int r2 = n - 1, c2 = n - 1;
    int count = 0;

    while (r1 < n && r2 >= 0) {
        int val = mat1[r1][c1] + mat2[r2][c2];
        
        if (val == x) {
            count++;
            c1++;
            c2--;
        } else if (val < x) {
            c1++;
        } else {
            c2--;
        }

        if (c1 == n) {
            c1 = 0;
            r1++;
        }

        if (c2 == -1) {
            c2 = n - 1;
            r2--;
        }
    }

    return count;
}

int main() {
    int mat1[][SIZE] = { { 1, 5, 6 }, { 8, 10, 11 }, { 15, 16, 18 } };
    int mat2[][SIZE] = { { 2, 4, 7 }, { 9, 10, 12 }, { 13, 16, 20 } };
    int n = SIZE;
    int x = 21;

    cout << "Count = " << countPairs(mat1, mat2, n, x);

    return 0;
}
