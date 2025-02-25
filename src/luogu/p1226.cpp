#include <bits/stdc++.h>

using namespace std;
using ll = long long;

ll fastpow(ll a,ll b,ll p)
{
    ll ans = 1;
    a %= p;
    while(b)
    {
        if(b & 1)
            ans = ((ans%p) * (a%p)) % p;
        a = ((a%p) * (a%p)) % p;
        b >>= 1;
    }
    return ans;
}

int main()
{
    ll a,b,p;
    cin >> a >> b >> p;
    cout << a << "^" << b << " mod " << p << "=" << fastpow(a,b,p);
    return 0;
}
