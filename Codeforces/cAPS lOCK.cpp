//https://codeforces.com/problemset/problem/131/A

#include <bits/stdc++.h>
using namespace std;
int main() {
	
	string s;
	cin>>s;
	
	int flag = 0;
	
	if (s.length() == 1){
		
		if(islower(s[0])){
			s[0] =  toupper(s[0]);
			cout<<s[0];
		}
		
		else if (isupper(s[0])) {
			s[0] =  tolower(s[0]);
			cout<<s[0];
		}
	}
	
	else{
		
		for(int i = 1; i<s.length(); ++i){
			if (isupper(s[i]))
				flag = 1;
			
			else{
				flag = 0;
				break;
			}
		}
	
	if (flag == 0)
		cout<<s;
		
	else {
		if(islower(s[0])){
			s[0] =  toupper(s[0]);
			cout<<s[0];
		}
		
		else if (isupper(s[0])) {
			s[0] =  tolower(s[0]);
			cout<<s[0];
		}
		
		for(int i = 1; i<s.length(); ++i)
				cout<<char(int(tolower(s[i])));
	}

		
	}
	
	return 0;
}