#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool exist(vector<vector<char>>& board, string word) {
        int m = board.size();
        int n = board[0].size();
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if (searchWord(board, word, i, j, 0)) {
                    return true;}
            }
        }
        return false;
    }
private:
    bool searchWord(vector<vector<char>>& board, const string& word, int i, int j, int index) {
        if (index == word.size()) {return true;}
        if (i < 0 || j < 0 || i >= board.size() || j >= board[0].size() || board[i][j] != word[index]) {
            return false;}
        char temp = board[i][j];
        board[i][j] = '*'; // Mark as visited
        bool result = searchWord(board, word, i + 1, j, index + 1) ||
                      searchWord(board, word, i - 1, j, index + 1) ||
                      searchWord(board, word, i, j + 1, index + 1) ||
                      searchWord(board, word, i, j - 1, index + 1);
        board[i][j] = temp; // Restore the original value
        return result;
    }
};