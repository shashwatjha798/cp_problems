//https://codeforces.com/problemset/problem/69/A

#include <iostream>
using namespace std;
int main() 
{
    int n;
    cin>>n;
    int a[n][3];
    int sum = 0;
    for (int i =0 ;i<n;++i){
        for (int j = 0;j<3;++j)
            cin>>a[i][j];
    }
    
    int flag;
    
    for(int i = 0; i<3; ++i){
    	for(int j = 0; j<n; ++j){
    		sum = sum + a[j][i];
    	}
    	
    	if (sum == 0){
    		flag = 1;
    		sum = 0;
    		continue;
    	}
    	else {
    		flag = 0;
    		break;
    	}
    }
    
    if (flag == 1) cout<<"YES";
    else cout<<"NO";
    return 0;
}
  