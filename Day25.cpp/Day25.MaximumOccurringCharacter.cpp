//{ Driver Code Starts
#include<iostream>
using namespace std;
// } Driver Code Ends

class Solution
{
    public:
    char getMaxOccuringChar(string str)
    {
        int frequency[26] = {0};

        for (char c : str) {
            frequency[c - 'a']++;
        }

        char maxChar = 'a';
        int maxCount = frequency[0];

        for (int i = 1; i < 26; ++i) {
            if (frequency[i] > maxCount) {
                maxCount = frequency[i];
                maxChar = 'a' + i;
            }
        }

        return maxChar;
    }
};

//{ Driver Code Starts.

int main()
{
   
    int t;
    cin >> t;
    while(t--)
    {
        string str;
        cin >> str;
    	Solution obj;
        cout<< obj.getMaxOccuringChar(str)<<endl;
    }
}
// } Driver Code Ends