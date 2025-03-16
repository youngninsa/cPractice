#include <bits/stdc++.h>

using namespace std;
using ll = long long;
int n,ans=2e9+7;
vector<int> suan(11,1),ku(11,0);

void dfs(int i,int sour,int hard)
{
    if(i>n)
    {
        if(sour == 1 && hard == 0) return;
        ans = min(ans, abs(sour-hard));
        return;
    }
    dfs(i+1,sour * suan[i],hard + ku[i]);
    dfs(i+1,sour,hard);
}

int main()
{
    cin >> n;
    for(int i=1;i<=n;i++)
        cin >> suan[i] >> ku[i];
    dfs(1,1,0);
    cout << ans;
    return 0;
}
