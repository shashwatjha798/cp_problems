//https://codeforces.com/problemset/problem/133/A

#include <bits/stdc++.h>
using namespace std;
int main() {
	
	string s;
	cin>>s;
	
	int flag = 0;
	
	for(int i = 0; i<s.length(); ++i){
		if (s[i] == 'H' || s[i] == 'Q' || s[i] == '9' ){
			cout<<"Yes";
			flag = 0;
			break;
		}
		else 
			flag = 1;
	}
	
	 if (flag == 1)
		cout<<"No";
	
	return 0;
}