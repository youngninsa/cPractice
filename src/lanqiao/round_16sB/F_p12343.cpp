#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int N = 1e5+7;
int w[N],deep[N];
vector<int> tree[N];

void dfs(int now,int fa)
{
    for(auto son:tree[now])
    {
        if(son==fa)
            continue;
        deep[son]=deep[now]+1;
        dfs(son,now);
    }
}

int main()
{
    int n,k;
    cin >> n >> k;
    for(int i=1;i<=n;i++)
        cin >> w[i];
    for(int i=1;i<n;i++)
    {
        int u,v;
        cin >> u >> v;
        tree[u].push_back(v);
        tree[v].push_back(u);
    }
    dfs(1,0);
    ll ans=0;
    for(int i=1;i<=n;i++)
    {
        if(deep[i]<=2*k)
            ans+=w[i];
    }
    cout << ans;
    return 0;
}
