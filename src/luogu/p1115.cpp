#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int N=2e5+9;

ll a[N]={0},dp[N]={0};

int main()
{
    int n;
    ll ans=-1e4-9;
    cin >> n;
    for(int i=1;i<=n;i++)
    {
        cin >> a[i];
        dp[i] = max(a[i],dp[i-1]+a[i]);
        ans = max(ans,dp[i]);
    }
    cout << ans;
    return 0;
}
