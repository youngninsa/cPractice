#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int N = 1e2+9;
int r,c,ans,a[N][N]={0},dp[N][N]={0};
int dx[4]={0,0,1,-1};
int dy[4]={1,-1,0,0};

int dfs(int y,int x)
{
    if(dp[y][x])
        return dp[x][y];
    dp[y][x]=1;
    for(int i=0;i<4;i++)
    {
        int xx = dx[i]+x;
        int yy = dy[i]+y;
        if(xx>=1 && yy>=1 && xx<=c && yy<=r && a[yy][xx]>a[y][x])
        {
            dfs(yy,xx);
            dp[y][x] = max(dp[y][x],dp[yy][xx]+1);
        }
    }
    return dp[y][x];
}

int main()
{
    cin >> r >> c;
    for(int i=1;i<=r;i++)
        for(int j=1;j<=c;j++)
            cin >> a[i][j];
    for(int i=1;i<=r;i++)
        for(int j=1;j<=c;j++)
            ans = max(ans,dfs(i,j));
    cout << ans;
    return 0;
}
