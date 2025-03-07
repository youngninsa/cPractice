#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int N = 1e3+9;

int main()
{
    int r,temp;
    cin >> r;
    vector<vector<int>> dp(r+1);
    for(int i=1;i<=r;i++)
    {
        dp[i].push_back(0);
        for(int j=1;j<=i;j++)
        {
            cin >> temp;
            dp[i].push_back(temp);
        }
    }
    for(int i=r-1;i>=1;i--)
        for(int j=1;j<=i;j++)
            dp[i][j] += max(dp[i+1][j],dp[i+1][j+1]);
    cout << dp[1][1];
    return 0;
}
