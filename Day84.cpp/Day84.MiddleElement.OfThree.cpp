#include <bits/stdc++.h> 
using namespace std;
int middleOfThree(int x, int y, int z)
{
    int ans;
    if(x>y && x<z || x<y && x>z){
        ans=x;
    } 
    if(y>z && y<x || y<z && y>x){
        ans=y;
    }
    if(z>x && z<y || z<x && z>y ){
        ans=z;
    }
    return ans;
}