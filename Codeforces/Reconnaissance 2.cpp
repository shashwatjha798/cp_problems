//https://codeforces.com/problemset/problem/34/A

#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int n;
	cin>>n;
	
	int a[n];
	for(int i = 0; i<n; ++i) cin>>a[i];
	
	int min = abs(a[n-1] - a[0]);
	int pos1 = n, pos2 = 1;
	
	for(int i = n-1;  i>=1; i--){
		if (abs(a[i] - a[i-1]) < min){
			min = abs(a[i] - a[i-1]);
			pos1 = i+1, pos2 = i;
		}
	}
	
	cout<<pos2<<" "<<pos1;
	
	return 0;
}