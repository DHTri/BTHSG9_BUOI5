#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n  , k;
    cin>>n>>k;
    long long a[10000];
    for(int i =1;i<=n;i++)
        cin>>a[i];
    sort( a+1 , a+n+1 , greater<int>());
    for(int i =1;i<=k;i++)
        cout<<a[i]<<" ";
} 
