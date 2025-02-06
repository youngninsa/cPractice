#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    ll k,n,ans=0,t=1;
    cin >> k >> n;
    while(n)
    {
        if(n&1)
            ans += t;
        t *= k;
        n >>= 1;
    }
    cout << ans;
    return 0;
}
