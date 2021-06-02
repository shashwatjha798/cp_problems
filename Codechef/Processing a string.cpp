https://www.codechef.com/problems/KOL15A

#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	
	string s;
	
	while(t){
	    int sum = 0;
	    cin>>s;
	    for(int i = 0; i<s.length(); ++i){
	        if(s[i]>='0' && s[i]<='9')
	            sum += s[i] - '0';
	    }
	    
	    cout<<sum<<endl;
	    t--;
	}
	return 0;
}

