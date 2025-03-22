#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    int n,count=0;
    cin >> n;
    vector<ll> a(n);
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
        if(a[i]==1 || ((a[i]&1) == 0 && __builtin_popcountll(a[i])==1))
            count++;
    }
    cout << count;
    return 0;
}
