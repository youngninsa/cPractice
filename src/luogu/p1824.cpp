#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int N = 1e5+7,INF = 1e9;
int n,c,a[N],ans;

bool p(int d)
{
    int k=0,last = -INF;
    for(int i=1;i<=n;i++)
    {
        if(a[i]-last >= d)
            last = a[i],k++;
    }
    return k>=c;
}

int main()
{
    cin >> n >> c;
    for(int i=1;i<=n;i++)
        cin >> a[i];
    sort(a+1,a+1+n);
    int l = 0,r = INF,mid;
    while(l<=r)
    {
        if(p(mid = (l+r)>>1))
            ans = mid,l = mid+1;
        else
            r = mid-1;
    }
    cout << ans;
    return 0;
}
