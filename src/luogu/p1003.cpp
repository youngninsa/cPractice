#include <bits/stdc++.h>
const int MAX = 10000+5;
using namespace std;
typedef long long ll;

int main()
{
    ll n,x,y,ans=-1,a[MAX],b[MAX],xLen[MAX],yLen[MAX];
    cin >> n;
    for(ll i = 0;i < n;i++)
        cin >> a[i] >> b[i]>> xLen[i] >> yLen[i];
    cin >> x >> y;
    for(ll i = 0;i < n;i++)
    {
        if(x>=a[i] && y>=b[i] && x<=a[i]+xLen[i]-1 && y<=b[i]+yLen[i]-1)
            ans = i+1;
    }
    cout << ans;
    return 0;
}

