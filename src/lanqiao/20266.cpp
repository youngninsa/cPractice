#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int sub,ans,n;
vector<int> yi;
vector<int> ling;

void solve()
{
    if(yi.empty())
    {
        while(n--)
            cout << "-1";
        return;
    }
    for(auto it0:ling)
    {
        ans=5001;
        for(auto it1:yi)
        {
            sub = abs(it0-it1);
            ans = min(ans,sub);
        }
        cout << ans << " ";
    }
}

int main()
{
    string s;
    cin >> n >> s;
    for(int i=0;i<n;i++)
    {
        if(s[i] == '1')
            yi.push_back(i);
        else
            ling.push_back(i);
    }
    solve();
    return 0;
}
