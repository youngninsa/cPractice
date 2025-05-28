#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int N = 1e2+9;

class TopoSort{
public:
    int n=0,m=0,ind[N]={0},outd[N]{0};
    vector<int> G[N],ans;
    queue<int> q;
    void creatG();
    bool isDAG();
};

void TopoSort::creatG()
{
    cout << "please input the n and the m:";
    cin >> this->n >> this->m;
    for(int i=1;i<=this->m;i++)
    {
        int x,y;
        cout << "please input the edge:";
        cin >> x >> y;
        this->outd[x]++;this->ind[y]++;
        this->G[x].push_back(y);
    }
        for(int i=1;i<=this->n;i++)
        if(this->ind[i]==0)
            this->q.push(i);
}
bool TopoSort::isDAG()
{
    try
    {
        while(!this->q.empty())
        {
            int x = this->q.front();
            this->ans.push_back(x);
            this->q.pop();
            for(auto i:this->G[x])
            {
                this->ind[i]--;
                if(this->ind[i] == 0)
                    this->q.push(i);
            }
        }
        if(this->ans.size() != this->n)
            throw false;
    }
    catch (bool &rs)
    {
        if(!rs)
            cout << "ERROR" << endl << "¸ÃÍ¼ÓÐ»·";
        return false;
    }
    return true;
}

int main()
{
    TopoSort t;
    t.creatG();
    if(t.isDAG())
        for(auto i:t.ans)
            cout << i << " ";
    return 0;
}
