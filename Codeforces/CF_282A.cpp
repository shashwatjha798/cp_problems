//Question: https://codeforces.com/problemset/problem/282/A

#include <iostream>
#include<strings.h>
using namespace std;
int main() 
{
	int t;
	cin>>t;
	
	int x = 0;
	string s;
	
	while(t)
	{
		cin>>s;
		if(s[0] == '+' || s[2] == '+')
			x = x+1;
		
		else if (s[0] == '-' || s[2] == '-')
			x = x-1;
		
		t--;
	}
	
	cout<<x;
	
	return 0;
}