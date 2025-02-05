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
    for(int r=2;r<2*n;r++)  //区间右边界
    {
        for(int l=r-1;l>=1 && r-l<n;l--)    //区间左边界
        {
            for(int mid=l;mid<r;mid++)  //划分左右区间的划分
                f[l][r] = max(f[l][r],f[l][mid]+f[mid+1][r]+e[l]*e[mid+1]*e[r+1]);
            /**
             * 状态方程: 该区间能量 = max(不操作的能量，左区间的能量+右区间的能量+合并后的能量)
             */
            if(ans < f[l][r])   //找到最大能量
                ans = f[l][r];
        }
    }
    cout << ans;
    return 0;
}
