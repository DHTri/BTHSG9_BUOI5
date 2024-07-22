#include <bits/stdc++.h>
using namespace std;

map<int , int>d;

int main()
{
    long long n;
    cin>>n;
    long long min = INT_MAX;
    long long mi = INT_MAX;
    long long a[100000];
    for(int i =1;i<=n;i++)
    {
        cin>>a[i];
        d[a[i]]++;
    }
    
    for(int i =1;i<=n;i++)
    {
        if(d[a[i]] < min) min = d[a[i]];
        if(a[i] < mi && d[a[i]] == min) mi = a[i];
    }    
    cout<<mi;
} 
