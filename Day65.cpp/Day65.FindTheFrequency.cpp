#include<bits/stdc++.h>
using namespace std;
int findFrequency(int arr[], int n, int x) {
    int count = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] == x) {
            count++;
        }
    }
    return count;
}

int main() {
    int N = 5;
    int Arr[] = {1, 1, 1, 1, 1};
    int X = 1;

    int frequency = findFrequency(Arr, N, X);

    cout << "Frequency of " << X << " is: " << frequency << endl;

    return 0;
}