//https://atcoder.jp/contests/abc217/tasks/abc217_c

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;

    int p[n], q[n];

    for(int i = 0; i<n; ++i) cin>>p[i];

    for(int i = 1; i<=n; ++i){
        q[p[i-1] - 1] = i;
    }

    for(int i = 0; i<n; ++i) cout<<q[i]<<" ";

    return 0;
}