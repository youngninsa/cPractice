#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int n,a[10]={0},b[10]={0};
bool used[10]={false};

void dfs(int k)
{
    if(k>n)
    {
        for(int i=1;i<=n;i++)
            cout << setw(5) << b[i];
        cout << endl;
        return ;
    }
    for(int i=1;i<=n;i++)
    {
        if(!used[i])
        {
            b[k]=a[i];
            used[i]=true;
            dfs(k+1);
            used[i]=false;
        }
    }
}

int main()
{
    cin >> n;
    for(int i=1;i<=n;i++)
        a[i]=i;
    dfs(1);
    return 0;
}
