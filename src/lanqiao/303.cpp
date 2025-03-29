#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int N = 1e3+5;

int main() {
    int total,n,w[N]={0},v[N]={0};
    cin >> total >> n;
    vector<vector<int>> dp(n+1,vector<int> (total+1,0));
    for(int i=1;i<=n;i++)
        cin >> w[i] >> v[i];
    for(int i=1;i<=n;i++)
        for(int j=1;j<=total;j++)
        {
            if(j<w[i])
                dp[i][j]=dp[i-1][j];
            else
                dp[i][j]= max(dp[i-1][j],dp[i-1][j-w[i]]+v[i]);
        }
    cout << dp[n][total];
    return 0;
}
