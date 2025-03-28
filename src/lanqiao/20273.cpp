#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int mod = 1e9+7;

int main()
{
    map<int,vector<int>> m;
    int n,d,t;
    cin >> n >> d;
    ll ans=1;
    for(int i=0;i<n;i++)
    {
        cin >> t;
        m[t].push_back(i);
    }
    for(auto &[key,vec]:m)
    {
        ll temp = vec.size()+1;
        for(int i=0;i<vec.size();i++)
            temp += (upper_bound(vec.begin(),vec.end(),vec[i]+d)-vec.begin())-i-1;
        ans *= temp;
        ans %= mod;
    }

    cout << ans-1;
    return 0;
}
