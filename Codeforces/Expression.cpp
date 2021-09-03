//https://codeforces.com/problemset/problem/479/A

#include <bits/stdc++.h>
using namespace std;
int main() {
	
	int a, b, c;
	cin>>a>>b>>c;
	
	vector<int> r;
	r.push_back(a+b*c);
	r.push_back(a*(b+c));
	r.push_back(a*b*c);
	r.push_back((a+b)*c);
	r.push_back(a+b+c);
	
	cout << *max_element(r.begin(), r.end());
	
	return 0;
}