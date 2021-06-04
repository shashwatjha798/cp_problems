//https://codeforces.com/contest/1535/problem/A

#include <bits/stdc++.h>
#include<vector>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	
	while(t--){
		int  v[4];
		for(int i = 0; i<4; ++i){
			cin>>v[i];
		}
		
		int a = max(v[0] , v[1]);
		int b = max(v[2] , v[3]);
		
		sort(v , v+4);
		
		if ((a == v[2] ||  a== v[3]) && (b == v[2] ||  b== v[3]) )
			cout<<"YES\n";
		else 
			cout<<"NO\n";
		
	}
	return 0;
}