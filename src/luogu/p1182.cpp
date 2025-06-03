#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int N = 1e5+7;
ll n,m,a[N]={0};

bool check(ll d)
{
    ll sum=0,s=1;
    for(int i=1;i<=n;i++)
    {
        if(sum+a[i] > d)
            sum=a[i],s++;
        else
            sum+=a[i];
    }
    return s <= m;
}

int main()
{
    ll l=0,r=0,mid,ans;
    cin >> n >> m;
    for(int i=1;i<=n;i++)
        cin >> a[i],r += a[i],l= max(l,a[i]);
    while(l<=r)
    {
        if(check(mid = l+r>>1))
            ans = mid,r = mid-1;
        else
            l = mid+1;
    }
    cout << ans;
    return 0;
}
