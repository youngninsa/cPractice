#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int n,ans=-1,temp[150];

void arrsum()
{
    vector<int> dp(n+1,0);
    for(int i=1;i<=n;i++)
    {
        dp[i] = max(dp[i],dp[i-1]+temp[i]);
        ans = max(ans,dp[i]);
    }
}

void matrixsum(vector<vector<int>> v)
{
    for(int i=1;i<=n;i++)
    {
        memset(temp,0, sizeof temp);
        for(int j=i;j<=n;j++)
        {
            for (int k=1;k<=n;k++)
                temp[k]+=v[j][k];
            arrsum();
        }
    }
}

int main()
{
    cin >> n;
    vector v(n+2,vector<int> (n+2,0));
    for(int i=1;i<=n;i++)
        for (int j = 1; j <= n; j++)
            cin >> v[i][j];
    matrixsum(v);
    cout << ans;
    return 0;
}
