//https://atcoder.jp/contests/abc219/tasks/abc219_b

#include <bits/stdc++.h>
using namespace std;

int main() {
	
	string a, b, c, d;
	cin>>a>>b>>c>>d;
	
	for(int i = 0; i<d.size(); ++i){
		if (d[i] == '1')
			cout<<a;
		if (d[i]== '2')
			cout<<b;
		if(d[i] == '3')
			cout<<c;
	}
	
	
	return 0;
}