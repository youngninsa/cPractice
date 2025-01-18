#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
ll n,m;
ll hashi[2500]={0},arr[50][50]={0},d[50][50]={0};

ll getr(ll);
ll getc(ll);
ll calculate(const ll *,ll,ll);

int main()
{
    ll r,c;
    cin >> n >> m;
    for(int i = 0;i < n * m;i++)//输入数据
    {
        cin >> hashi[i];
        arr[getr(i)][getc(i)] = hashi[i];
    }

    for(int i=0;i<n*m;i++)//计算最大距离
    {
        r = getr(i);
        c = getc(i);
        d[r][c] = calculate(hashi,r,c);
    }
    
    for(int i=0;i<n;i++)//输出数据
    {
        for(int j=0;j<m;j++)
        {
            cout << d[i][j];
            if(j != m-1)
                cout << " ";
        }
        if(i != n-1)
            cout << endl;
    }
    return 0;
}

ll distance(ll x,ll y,ll a,ll b)//计算距离
{
    return (x-a)*(x-a)+(y-b)*(y-b);
}
ll calculate(const ll *hash,ll x,ll y) //计算最大距离
{
    ll r=0,c=0,s=0;
    for(int i=0;i<2500;i++)
    {
        if(hash[i] == arr[x][y])
        {
            r = getr(i);
            c = getc(i);
            if(distance(x,y,r,c) > s)
                s = distance(x,y,r,c);
        }
    }
    return s;
}

ll getr(ll index)//获取行
{
    return index / m;
}
ll getc(ll index)//获取列
{
    return index % m;
}
