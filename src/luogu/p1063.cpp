#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main()
{
    int n,ans=-1,f[205][205]={0},e[205]={0};
    cin >> n;
    for(int i=1;i<=n;i++)   //初始化能量
    {
        cin >> e[i];
        e[n+i] = e[i];
    }
    for(int r=2;r<2*n;r++)
    {
        for(int l=r-1;l>=1 && r-l<n;l--)
        {
            for(int mid=l;mid<r;mid++)
                f[l][r] = max(f[l][r],f[l][mid]+f[mid+1][r]+e[l]*e[mid+1]*e[r+1]);
            if(ans < f[l][r])
                ans = f[l][r];
        }
    }
    cout << ans;
    return 0;
}
