#include <bits/stdc++.h>

using namespace std;
using ll = long long;
int mod = 1e9+7;

ll fp(ll x,ll y)
{
    ll ans=1;
    while(y)
    {
        if(y&1) ans = ((ans%mod) * (x%mod))%mod;
        x=x*x%mod;
        y >>= 1;
    }
    return ans;
}

int main()
{
    cout << fp(2,1012);
    return 0;
}
