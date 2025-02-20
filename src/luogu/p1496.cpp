#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int N = 2e4+9;

int main()
{
    ll n,ans=0,a[N],b[N],d[2*N];
    bool f[2*N] = {false};
    cin >> n;
    int k=1;
    for(ll i=1;i<=n;i++)
    {
        cin >> a[i] >> b[i];
        d[k++]=a[i];
        d[k++]=b[i];
    }
    sort(d+1,d+1+2*n);
    for(ll i=1;i<=n;i++)
    {
        a[i]= lower_bound(d + 1, d + 1 + 2*n, a[i])-d;
        b[i]= lower_bound(d + 1, d + 1 + 2*n, b[i])-d;
    }
    for(ll i=1;i<=n;i++)
        for(ll j=a[i];j<b[i];j++)
            f[j] = true;
    for(ll i=1;i<=2*n;i++)
    {
        if(f[i])
            ans += d[i+1]-d[i];
    }
    cout << ans;
    return 0;
}
