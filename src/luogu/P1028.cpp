#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int N = 1e3+5;
int f[N];

int solve(int n)
{
    int ans=1;
    if(n==1)
        return 1;
    if(f[n] != -1)
        return f[n];
    for(int i=1;i<=n/2;i++)
        ans += solve(i);
    return f[n]=ans;
}

int main()
{
    int n;
    cin >> n;
    memset(f,-1, sizeof(f));
    f[1]=1;
    cout << solve(n);
    return 0;
}
