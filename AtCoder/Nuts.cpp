//https://atcoder.jp/contests/abc204/tasks/abc204_b

#include <iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	
	int a, sum  =0;
	
	while(n--){
		cin>>a;
		if (a>10)
			sum = sum+ (a- 10);
	}
	cout<<sum;
	return 0;
}