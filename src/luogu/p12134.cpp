#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int N = 1e5+7;

int main()
{
    ll n,m,a[N]={0};
    cin >> n >> m;
    for(ll i=0;i<n;i++)
        cin >> a[i];
    sort(a,a+n);
    ll l,r;
    ll ans=1e18+9;
    for(l=0,r=l+m-1;l<n-m+1;l++,r++)
        ans = min(ans,a[r]*a[r]-a[l]*a[l]);
    cout << ans;
    return 0;
}
