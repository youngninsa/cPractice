#include <bits/stdc++.h>

using namespace std;
using ll = long long;

const int N = 1e5+9;
bool vis[N] = {false};
vector<vector<int>> G(N+1);
int n,m;

void dfs(int vertex)
{
    if(vis[vertex])
        return ;
    vis[vertex] = true;
    cout << vertex << " ";
    for(int i:G[vertex])
        dfs(i);
}

void bfs()
{
    queue<int> q;
    q.push(1);
    while(!q.empty())
    {
        int v = q.front();
        q.pop();
        if(vis[v])
            continue;
        vis[v]=true;
        cout << v << " ";
        for(int i:G[v])
            q.push(i);
    }
}
int main()
{
    cin >> n >> m;
    for(int i=1;i<=m;i++)
    {
        int v,e;
        cin >> v >> e;
        G[v].push_back(e);
    }
    for(int i=1;i<=n;i++)
        sort(G[i].begin(),G[i].end());
    dfs(1);
    cout << endl;
    memset(vis,0,sizeof(vis));
    bfs();
    return 0;
}
