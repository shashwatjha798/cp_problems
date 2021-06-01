//https://www.codechef.com/problems/EVENGAME

#include <bits/stdc++.h>
using namespace std;
int main() {
	
	int t;
	cin>>t;
	
	while(t){
	    int sum = 0;
	    int n;
	    cin>>n;
	    int a;
	    for(int i = 0; i<n; ++i){
	        cin>>a;
	        sum += a;
	    }
	    
	    if(sum%2 == 0) cout<<1<<endl;
	    else cout<<2<<endl;
	    t--;
	}
	return 0;
}
