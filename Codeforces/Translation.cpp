//https://codeforces.com/problemset/problem/41/A

#include <bits/stdc++.h>
using namespace std;
int main() {
	
	string s, t;
	cin>>s>>t;
	
	int n = s.length();
	int flag;
	
	for(int i = 0; i<n; ++i){
		if (s[i] == t[n-1-i])
			flag = 0;
		else{
			flag = 1;
			break;
		}
	}
	
	if (flag == 0)
		cout<<"YES";
	else 
		cout<<"NO";
	
	return 0;
}