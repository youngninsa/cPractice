#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int N = 10;
bool vis[N] = {false};

typedef struct vertexNode{      //顶点表
    int data;
    struct arcNode *first;
}vertexNode;

typedef struct  arcNode{        //边表
    int adj;
    struct arcNode *nextadj;
}arcNode;

typedef struct {                //图
    vertexNode veradj[N];
    int vernum, arcnum;
}alGraph;

void CreatGraph(alGraph &G,int n,int m)
{

    for(int i=1;i<=n;i++)
    {
        G.veradj[i].data = i;
        G.veradj[i].first = nullptr;
    }
    int v,e;
    arcNode *p;
    for(int i=1;i<=m;i++)
    {
        cin >> v >> e;
        auto s = new arcNode ;
        s->adj = e;
        s->nextadj = nullptr;
        if(!G.veradj[v].first)
        {
            G.veradj[v].first = s;
            p = s;
            continue;
        }
        p->nextadj = s;
        p = s;
    }
}

void printGraph(alGraph &G)
{
    for(int i=1;i<=G.vernum;i++)
    {
        cout << G.veradj[i].data << ":";
        arcNode *p = G.veradj[i].first;
        while(p)
        {
            cout <<setw(3 ) << p->adj;
            p = p->nextadj;
        }
        cout << endl;
    }
}

void dfs(alGraph &G,int vertex)
{
    if(vis[vertex])
        return ;
    vis[vertex] = true;
    cout << vertex << " ";
    for(auto p = G.veradj[vertex].first;p != nullptr;p=p->nextadj)
            dfs(G,p->adj);
}

int main()
{
    alGraph aLG;
    cin >> aLG.vernum >> aLG.arcnum;
    CreatGraph(aLG,aLG.vernum,aLG.arcnum);
    dfs(aLG,1);
    return 0;
}

