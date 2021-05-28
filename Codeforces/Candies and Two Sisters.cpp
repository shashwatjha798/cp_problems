//https://codeforces.com/problemset/problem/1335/A

#include <bits/stdc++.h>
using namespace std;
int main() {
	
	int n;
	cin>>n;
	int a[n];
	
	for(int i = 0; i<n; ++i){
		cin>>a[i];
	
		cout<<int(floor((a[i]-1)/2))<<endl;
	}
	return 0;
}