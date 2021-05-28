//https://codeforces.com/problemset/problem/427/A

#include <iostream>
using namespace std;
int main() {
	
	int n;
	cin>>n;
	int a[n];
	
	int sum =  0 , count = 0;
	
	for(int i = 0; i<n; ++i){
		cin>>a[i];
		
		sum += a[i];
		
		if(sum < 0){
			count++;
			sum = 0;
		}
	}

	cout<<count;
	return 0;
}