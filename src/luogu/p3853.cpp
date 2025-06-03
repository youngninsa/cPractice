#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int N = 1e5+7;
int r,n,k,a[N]={0};

bool p(int d)
{
    int total=0;
    for(int i=1;i<n;i++)
    {
        int len=a[i]-a[i-1];
        if(len > d)
            total += (len-1)/d;
    }
    return total <= k;
}

int main()
{
    cin >> r >> n >> k;
    for(int i=0;i<n;i++)
        cin >> a[i];
//    sort(a+1,a+1+n);
    int l=1,mid,ans;
    while(l<=r)
    {
        if(p(mid = l+r >> 1))
            ans = mid,r = mid-1;
        else
            l = mid+1;
    }
    cout << ans;
    return 0;
}
