//https://atcoder.jp/contests/abc204/tasks/abc204_a

#include <iostream>
using namespace std;
int main() {
	int x, y;
	cin>>x>>y;
	
	if (x != y)
		cout<<(3 - (x+y));
	else if (x == y)
		cout<<x;
	return 0;
}