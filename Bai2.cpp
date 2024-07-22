#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    long long a[100000];
    long long d = 0;
    for (int i = 1; i <= n; ++i) 
    {
        cin>>a[i];
    }

    for (int i = 1; i <= n; ++i)
     {
        if (a[i] <= 0 || a[i] > n) 
        {
            a[i] = n + 1;
        }
    }

    for (int i = 1; i <= n; ++i) 
    {
        d = abs(a[i]);
        if (d <= n) 
        {
            a[d - 1] = -abs(a[d - 1]);
        }
    }
    long long s = n + 1;
    for (int i = 0; i < n; ++i) {
        if (a[i] > 0) {
            s = i + 1;
            break;
        }
    }
    cout<<s;
}
