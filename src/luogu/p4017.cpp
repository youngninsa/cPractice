#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int N = 1e4+9,mod = 80112002;
vector<int> G[N];
queue<int> q;
int n,m,ans,f[N]={0},ind[N]={0},outd[N]{0};

int main()
{
    cin >> n >> m;
    for(int i=1;i<=m;i++)
    {
        int x,y;
        cin >> x >> y;
        outd[x]++;ind[y]++;
        G[x].push_back(y);
    }
    for(int i=1;i<=n;i++)
        if(ind[i]==0)
            q.push(i),f[i]=1;
    while(!q.empty())
    {
        int x = q.front();
        q.pop();
        for(auto i:G[x])
        {
            f[i] = (f[i]+f[x]) % mod;
            ind[i]--;
            if(ind[i] == 0)
                q.push(i);
        }
    }
    for(int i=1;i<=n;i++)
        if(outd[i] == 0)
            ans = (ans + f[i]) % mod;
    cout << ans;
    return 0;
}
