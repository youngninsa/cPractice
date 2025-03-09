#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){

    int n, k;
    cin >> n >> k;
    vector<ll> a(n);
    vector<ll> wa(n+1,0),sa(n+1,0);
    for(int i = 0; i < n; i++)
        cin >> a[i];
    sort(a.begin(), a.end());
    for(int i=0;i<n;i++)
    {
        sa[i+1]=sa[i]+a[i];
        wa[i+1]=wa[i]+a[i]*i;
    }
    ll ans = 1e18+9,s=0;
    for(int l=0;l<=n-k;l++)
    {
        int r=l+k-1;
        ll subsa = sa[r+1]-sa[l];
        ll subwa = wa[r+1]-wa[l];
        s = 2*subwa-(l+r)*subsa;
        ans = min(ans,s);
    }
    cout << ans;
    return 0;
}
