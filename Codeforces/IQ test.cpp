//https://codeforces.com/problemset/problem/25/A

#include<bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	
	int a[n];
	
	for(int i = 0; i<n; ++i) cin>>a[i];
	
	int count_e = 0 , count_o = 0;
	int res_e = 0, 	res_o = 0;
	
	for(int i = 0; i<n; ++i){
		if(a[i]%2 == 0){
			count_e++;
			res_e = i+1;
		}
		
		else{
			count_o++;
			res_o = i+1;
		}
	}
	
	if(count_e == 1) cout<<res_e;
	else cout<<res_o;
	
	return 0;
}