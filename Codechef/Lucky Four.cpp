#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	string n;
	
	while(t){
	    int count = 0;
	    cin>>n;
	    for(int i = 0; i<n.length(); ++i){
	        if(n[i] ==  '4')
	            count++;
	    }
	    cout<<count<<endl;
	    t--;
	    
	}
	return 0;
}
