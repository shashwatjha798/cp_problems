//https://codeforces.com/problemset/problem/80/A

#include <bits/stdc++.h>
using namespace std;

int prime(int n){
	
	if(n == 1) return 0;
	if(n == 2) return 1;
	
	for(int i= 2; i<=9; ++i){
		if (n%i == 0 && i!=n)
			return 0;
	}
	return 1;
	
}

int main() {
	
	int n, m;
	cin>>n>>m;
	
	int flag = 0;
	
	for(int i = n+1; i<=m; ++i){
		if(prime(i)){
			flag = 1;
			if(i == m) cout<<"YES";
			else {
				cout<<"NO";
				break;
			}	
		}
	}
	
	if (flag == 0) cout<<"NO";
	
	return 0;
}