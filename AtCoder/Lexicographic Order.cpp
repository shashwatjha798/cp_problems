//https://atcoder.jp/contests/abc217/tasks/abc217_a

#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s, t;
    cin>>s>>t;

    int res = s.compare(t);

    if(res < 0) cout << "Yes";
    else if (res >0) cout<<"No";

    return 0;
}