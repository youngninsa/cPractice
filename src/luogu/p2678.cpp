#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int N = 5e4+9;
int n,m,l=1,r;
vector<int> a(N,0);

bool jump(int x)
{
    int total=0;
    int pst=0;
    for(int i=1;i<=n+1;i++)
    {
        if(a[i]-a[pst]<x)
            total++;
        else
            pst=i;
    }
    if(total>m)
        return false;
    else
        return true;
}

int main()
{
    cin >> r >> n >> m;
    for(int i=1;i<=n;i++)
        cin >> a[i];
    a[n+1]=r;
    int mid,ans;
    while(l<=r)
    {
        mid=l+((r-l)>>1);
        if(jump(mid))
        {
            ans=mid;
            l=mid+1;
        }

        else
            r=mid-1;
    }
    cout << ans;
    return 0;
}
