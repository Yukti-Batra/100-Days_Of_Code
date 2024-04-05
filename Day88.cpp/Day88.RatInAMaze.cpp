#include<bits/stdc++.h>
using namespace std;
class Solution{
    private: 
    //this function is made to check three consitions
    bool isSafe(vector<vector<int>> &m, int n,int X, int Y, vector<vector<int>> visited){
        if((X>=0 && X<n) && (Y>=0 && Y<n) && (visited[X][Y]==0) && (m[X][Y]==1)){
            return true;
        }
        else{
            return false;
        }
    }
    void solve(vector<vector<int>> &m, int n, int x, int y, vector<vector<int>> visited, vector<string> &ans, string path){
        //base case
        if(x==n-1 && y==n-1){
            ans.push_back(path);
            return;
        }
        // we are already at x,y
        visited[x][y]=1;
        //Travelling Diretions: Down,Left,Right,Up
        //down
        int newX=x+1;
        int newY=y;
        if(isSafe( m, n, newX, newY,visited)){
            path.push_back('D');
            solve(m,n,newX,newY,visited,ans,path);
            path.pop_back();
        }
        //left
        newX= x;
        newY= y-1;
        if(isSafe( m, n, newX, newY,visited)){
            path.push_back('L');
            solve(m,n,newX,newY,visited,ans,path);
            path.pop_back();
        }
        
        //Right
        newX= x;
        newY= y+1;
        if(isSafe( m, n, newX, newY,visited)){
            path.push_back('R');
            solve(m,n,newX,newY,visited,ans,path);
            path.pop_back();
        }
        
        //Up
        newX= x-1;
        newY= y;
        if(isSafe( m, n, newX, newY,visited)){
            path.push_back('U');
            solve(m,n,newX,newY,visited,ans,path);
            path.pop_back();
        }
        visited[x][y]=0;
    }
    public:
    vector<string> findPath(vector<vector<int>> &m, int n) {
        vector<string> ans;
        if(m[0][0]==0){
            return ans;
        }
        int srcX=0;
        int srcY=0;
        vector<vector<int>> visited = m;
        for(int i=0;i<n;i++){ 
            for(int j=0;j<n;j++){
                visited[i][j]=0;
            }
        }
        string path="";
        solve(m, n, srcX, srcY, visited, ans, path);
        sort(ans.begin(),ans.end());
        return ans;
    }
};
