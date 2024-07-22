#include <bits/stdc++.h>
using namespace std;

map<int , int>d;

int main()
{
    long long n;
    cin>>n;
    long long a[100000];
    for(int i =1;i<=n;i++)
    {
        cin>>a[i];
        d[a[i]]++;
    }
    
    for(int i =1;i<=n;i++)
    {
        if(d[a[i]] % 2 == 1)
            {
                cout<<a[i];
                break;
            }
    }
} 
