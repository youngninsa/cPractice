#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int N = 1e2+5;
const int M = 1e4+7;
int f[N][M]={0};

int main()
{
    int n,m;
    cin >> n >> m;
    vector<int> a(n+5,0);
    for(int i=1;i<=n;i++)
        cin >> a[i];
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)
        {
            if(j==a[i])
                f[i][j]=f[i-1][j]+1;
            if(j<a[i])
                f[i][j]=f[i-1][j];
            if(j>a[i])
                f[i][j]=f[i-1][j]+f[i-1][j-a[i]];
        }
    cout << f[n][m];
    return 0;
}