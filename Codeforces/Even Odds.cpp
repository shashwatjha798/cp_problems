//https://codeforces.com/contest/318/problem/A

#include <bits/stdc++.h>
using namespace std;

int main() {
	double n , k;
	cin>>n>>k;
	
	double hf = ceil(n/2);
	
	if(k>hf){
		cout<< fixed << setprecision(0) <<2*(k-hf);
	}
	
	else if (k<=hf){
		cout<< fixed << setprecision(0) <<2*k-1;
	}
	
	return 0;
}