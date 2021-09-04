//https://atcoder.jp/contests/abc217/tasks/abc217_b

#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector <string> s;
    string a, b, c;
    cin>>a>>b>>c;
    s.push_back(a);
    s.push_back(b);
    s.push_back(c);
 
    sort(s.begin(), s.end());
 
    vector <string> s1 = {"ABC", "AGC", "AHC", "ARC"};
 
    for(int i = 0; i<4; ++i){
        if (s[i] == s1[i])
            continue;
        else{
            cout<<s1[i];
            break;
        }
    }
    
 
 
    return 0;
}