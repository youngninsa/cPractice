#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int N=200020;
ll n,m,s,ans,y,w[N],v[N],l[N],r[N],ww[N],vv[N];
ll bl=1,br=N;

bool check(ll W)
{
    memset(ww,0,sizeof(ww));
    memset(vv,0,sizeof(vv));
    y=0;
    for(int i=1;i<=n;i++)
    {
        if(w[i]>=W)
        {
            ww[i]=ww[i-1]+1;
            vv[i]=vv[i-1]+v[i];
        }
        else
        {
            ww[i]=ww[i-1];
            vv[i]=vv[i-1];
        }
    }
    for(int i=1;i<=m;i++)
    {
        ll lll=l[i];
        ll rrr=r[i];
        y += (ww[rrr]-ww[lll-1]) * (vv[rrr] - vv[lll-1]);
    }
    if(y>=s)
        return true;
    else
        return false;
}

int main()
{
    cin >> n >> m >> s;
    ans=s;
    for(int i=1;i<=n;i++)
        cin >> w[i] >> v[i];
    for(int i=1;i<=m;i++)
        cin >> l[i] >> r[i];
    while(bl <= br)
    {
        ll mid = (bl+br) >> 1;
        if(check(mid))
            bl = mid+1;
        else
            br = mid-1;
        ans = min(ans, llabs(s-y));
    }
    cout << ans;
    return 0;
}
