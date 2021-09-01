//https://codeforces.com/problemset/problem/260/A

#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a, b, n;
    cin>>a>>b>>n;

    int flag = 0;

    long long res;

    for(int i = 0; i<=9; ++i){
        if ((a*10 + i)%b == 0){
            res = a*10+i;
            flag = 1;
            break;
        }
    }

    if(flag == 1){
        cout<<res;
        for(int i = 0; i<n-1; ++i)
            cout<<0;
    }

    else if(flag == 0)
        cout<<-1;
    return 0;
}