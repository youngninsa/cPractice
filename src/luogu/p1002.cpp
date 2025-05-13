#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    ll x,y,bx,by,dp[22][22]={0},h[22][22]={0};
    cin >> bx >> by >> x >> y;
    int dx[]={0,-2,-2,-1,-1,1,1,2,2},
        dy[]={0,-1,1,-2,2,-2,2,-1,1};
    for(int i=0;i<=8;i++)
    {
        int tx = x+dx[i],ty = y+dy[i];
        if(tx>=0 && tx<=bx && ty>=0 && ty<=by)
            h[tx][ty]=1;
    }
    dp[0][0] = 1-h[0][0];
    for(int i=0;i<=bx;i++)
        for(int j=0;j<=by;j++)
        {
            if(h[i][j]) continue;
            if(i!=0)
                dp[i][j] += dp[i-1][j];
            if(j!=0)
                dp[i][j] += dp[i][j-1];
        }
    cout << dp[bx][by];
    return 0;
}
