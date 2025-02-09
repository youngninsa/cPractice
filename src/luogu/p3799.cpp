#include <bits/stdc++.h>
#define c1(n) (n)
#define c2(n) ((n)*((n)-1)/2)
using namespace std;
using ll = long long;
const int mod = 1e9+7;

int main()
{
    ll n,temp,ans=0,b[5003]={0};
    cin >> n;
    for(int i=0;i<n;i++)
    {
        cin >> temp;
        b[temp]++;
    }
    for(int a=2;a<=5000;a++)
    {
        for(int c=1;c<=a/2;c++)
        {
            int d=a-c;
            if(d!=c && b[a]>=2 && b[c]>=1 && b[d]>=1)
                ans += (c2(b[a]) * c1(b[c]) * c1(b[d])) % mod;
            if(d==c && b[a]>=2 && b[c]>= 2)
                ans += (c2(b[a]) * c2(b[c])) % mod;
        }
    }
    ans %= mod;
    cout << ans;
    return 0;
}
