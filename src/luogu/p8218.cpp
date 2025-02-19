#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int n,m;


void solve()
{
    vector<int> a(n+1,0);
    vector<int> sum(n+1,0);
    for(int i=1;i<=n;i++)
    {
        cin >> a[i];
        sum[i] = sum[i-1]+a[i];
    }
    cin >> m;
    while(m--)
    {
        int l,r;
        cin >> l >> r;
        cout << sum[r]-sum[l-1] << endl;
    }
}

int main()
{
    cin >> n;
    solve();
    return 0;
}
