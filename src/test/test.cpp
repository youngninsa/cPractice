#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    int n,temp,ma=0;
    map<int,int> m;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        cin >> temp;
        m[temp]++;
    }
    for(auto &it:m)
        ma = max(ma,it.second);
    cout << ma;
    return 0;
}
