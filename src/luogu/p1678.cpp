#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int N = 1e6+9;
ll a[N]={0},b[N]={0};

int main()
{
    ll m,n,sum=0;
    cin >> m >> n;
    for(ll i=1;i<=m;i++)
        cin >> a[i];
    for(ll i=1;i<=n;i++)
        cin >> b[i];
    sort(a+1,a+1+m);
    for(ll i=1;i<=m;i++)
    {
        ll l=1,r=n,ans=1e9+7;
        while(l<=r)
        {
            ll mid = (l+r)>>1;
            if(a[mid]<=b[i])
            {
                ans = min(ans, abs(a[mid]-b[i]));
                l = mid + 1;
            }
            else
            {
                ans = min(ans, abs(a[mid]-b[i]));
                r = mid - 1;
            }
        }
        sum += ans;
    }
    cout << sum;
    return 0;
}
