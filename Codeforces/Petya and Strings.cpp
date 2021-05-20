//https://codeforces.com/problemset/problem/112/A

#include <bits/stdc++.h>
#include<strings.h>
using namespace std;
int main() 
{
	string a, b;
	cin>>a>>b;
	
	int flag = 0;
	
	for(int i = 0; i<a.length(); ++i)
	{
		a[i] = tolower(a[i]);
		b[i] = tolower(b[i]);
		
		if(int(a[i]) == int(b[i])){
			flag = 1;
			continue;
		}
		else if (int(a[i]) < int(b[i])){
			cout<<-1;
			flag = 0;
			break;
		}
		else {
			cout<<1;
			flag = 0;
			break;
		}
	}
	
	if (flag == 1)
		cout<<0;
	return 0;
}