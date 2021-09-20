//https://atcoder.jp/contests/abc219/tasks/abc219_a

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	
	if (n<40)
		cout<<40-n;
	else if (n>=40 && n<70)
		cout<<70-n;
	else if (n>=70 && n<90)
		cout<<90-n;
	else if (n>=90)
		cout<<"expert";
	return 0;
}