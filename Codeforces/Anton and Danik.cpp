https://codeforces.com/problemset/problem/734/A

#include<bits/stdc++.h>
using namespace std;
int main(){
        
        int n;
        cin>>n;
        
        string s;
        cin>>s;
        
        int count = 0;
        
        for(int i = 0; i<n; ++i){
                if(s[i] == 'A')
                        count++;
        }
        
        if(count>(n-count)) cout<<"Anton";
        else if (count<(n-count)) cout<<"Danik";
        else cout<<"Friendship";
        
        return 0;
}
