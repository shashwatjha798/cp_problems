//https://codeforces.com/contest/705/problem/A

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;

    if (n == 1)
        cout<<"I hate it";
    else {

    for(int i = 1; i<=n; ++i){
        if(i %2 != 0 && i != n)
            cout<<"I hate that ";
        else if (i%2== 0 && i != n)
            cout<<"I love that ";
        else 
            if (i%2 == 0)
                cout<<"I love it ";
            else 
                cout<<"I hate it ";
    }
        
    }
    
}