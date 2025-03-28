#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int N = 1e5+7;

int main()
{
    int n;
    ll a,b,ans=0,diff[N]={0};
    cin >> n;
    for(int i=0;i<n;i++)
    {
        cin >> a >> b;
        ans += b;
        diff[i]=a-b;
    }
    sort(diff,diff+n,greater<ll>());
    for(int i=0;i<n/2;i++)
        ans+=diff[i];
    cout << ans;
    return 0;
}
