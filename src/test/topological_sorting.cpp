#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int N = 1e6+7;
//ifstream ifs,ofs;

class TopoSort
{
public:
    int n=0,m=0,ind[N]={0};
    vector<int> G[N],ans;
    queue<int> q;
    void creatG();
    void sort();
};

void TopoSort::creatG()
{
//    ifs >> this->n >> this->m;
    cin >> this->n >> this->m;
    for(int i=1;i<=this->m;i++)
    {
        int x,y;
        cin >> x >> y;
//        ifs >> x >> y;
        if(x==y)
            throw runtime_error("cycle detected");
        this->ind[y]++;
        this->G[x].push_back(y);
    }
        for(int i=1;i<=this->n;i++)
            if(this->ind[i]==0)
                this->q.push(i);
}
void TopoSort::sort()
{
        while(!this->q.empty())
        {
            int x = this->q.front();
            this->ans.push_back(x);
            this->q.pop();
            for(auto &i:this->G[x])
            {
                this->ind[i]--;
                if(this->ind[i] == 0)
                    this->q.push(i);
            }
        }
        if(this->ans.size() != this->n)
            throw runtime_error("cycle detected");
}

int main()
{

//    ifs.open("../infile/test/p0001_3.in",ios::in);
//    ofs.open("../outfile/test/p0001_3.out",ios::in);
    try
    {
        TopoSort t;
        t.creatG();
        t.sort();
        for(auto i:t.ans)
            cout << i << " ";
        }
    catch (const runtime_error &e)
    {
        cout << e.what() << endl;
    }
//    ifs.close();
//    ofs.close();
    return 0;
}
