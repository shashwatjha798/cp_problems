//https://codeforces.com/contest/133/problem/A

#include <bits/stdc++.h>
using namespace std;
int main() {
	
	string s;
	cin>>s;
	
	int flag = 0;
	
	for(int i = 0; i<s.length(); ++i){
		if (s[i] == 'H' || s[i] == 'Q' || s[i] == '9' ){
			cout<<"YES";
			flag = 0;
			break;
		}
		else 
			flag = 1;
	}
	
	 if (flag == 1)
		cout<<"NO";
	
	return 0;
}