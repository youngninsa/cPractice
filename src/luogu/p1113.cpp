#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int N = 1e4+7;
int n,u,v,ans=0,len[N]={0},vis[N]={0};
vector<int> g[N];

int dfs(int x)
{
    if(vis[x])
        return vis[x];
    for(int i=0;i<g[x].size();i++)
        vis[x] = max(vis[x], dfs(g[x][i]));
    vis[x]+=len[x];
    return vis[x];
}

int main()
{
    cin >> n;
    for(int i=1;i<=n;i++)
    {
        cin >> u >> len[i];
        while(cin >> v)
            if(!v)
                break;
            else
                g[v].push_back(u);
    }
    for(int i=1;i<=n;i++)
        ans = max(ans, dfs(i));
    cout << ans;
    return 0;
}
