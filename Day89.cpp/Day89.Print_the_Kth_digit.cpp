#include <bits/stdc++.h> 
using namespace std;
int findKthFromRight(int n, int m, int k) 
{
	long long result=pow(n,m);
	
	string str=to_string(result);
	
	int index=str.size()-k;
	
	return str[index]-'0';
}