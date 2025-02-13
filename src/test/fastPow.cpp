#include <bits/stdc++.h>

using namespace std;
using ll = long long;

ll fastPow(ll a,ll n,ll m)
{
    ll ans = 1;
    a %= m;
    while(n)
    {
        if(n & 1)
            ans = (ans * a) % m;
        a = (a * a) % m;
        n >>= 1;
    }
    return ans;
}

int main()
{
    ll a,n,m;           //a的n次幂对m取模
    cin >> a >> n >> m;
    cout << fastPow(a,n,m);
    return 0;
}
