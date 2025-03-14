#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int N = 2e6+9;

int main()
{
    int n,m,index,backl,backr,ans=0;
    cin >> n >> m;
    vector<int> l(N,0),r(N,0);
    bool flag = false;
    for(int i=1;i<=n;i++)
    {
        cin >> index;
        if(index<0)
            l[-index]++;
        else if(index>0)
            r[index]++;
        else
            flag = true;
    }
    for(int i=1;i<=m;i++)
    {
        l[i]+=l[i-1];
        r[i]+=r[i-1];
    }
    for(int i=0;i<=m/2;i++)
    {
        backl = l[i]+r[m-2*i];
        backr = r[i]+l[m-2*i];
        ans = max(ans,max(backl,backr));
    }
    if(flag)
        ans++;
    cout << ans;
    return 0;
}
