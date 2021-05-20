//https://codeforces.com/problemset/problem/339/A

#include <bits/stdc++.h>
using namespace std;
int main() {
	
	string s;
	cin>>s;
	
	sort(s.begin(), s.end());
	
	int count = 0;
	
	for(int i = 0 ;i<s.length(); ++i)
	{
		if(s[i] == '+')
			count++;
		else{
			cout<<s[i];
			if(count!=0)
			{
				cout<<'+';
				count--;
			}
		}
	}
	return 0;
}