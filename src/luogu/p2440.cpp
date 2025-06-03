#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int N = 1e5+7;
int n,k,a[N]={0};

bool p(int d)
{
    int total=0;
    for(int i=1;i<=n;i++)
        total += a[i]/d;
    return total >= k;
}

int main()
{
    cin >> n >> k;
    for(int i=1;i<=n;i++)
        cin >> a[i];
    sort(a+1,a+1+n);
    int l=1,r=1e8,mid,ans=0;
    while(l<=r)
    {
        if(p(mid = l+r >> 1))
            ans = mid,l = mid+1;
        else
            r = mid-1;
    }
    cout << ans;
    return 0;
}
