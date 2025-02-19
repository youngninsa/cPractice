#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    int n,p,x,y,z,min=1e9;
    cin >> n >> p;
    vector<int> a(n+1,0);
    vector<int> d(n+1,0);
    for(int i=1;i<=n;i++)
        cin >> a[i];
    for(int i=1;i<=n;i++)
        d[i]=a[i]-a[i-1];
    for(int i=1;i<=p;i++)
    {
        cin >> x >> y >> z;
        d[x] += z;
        d[y+1] -= z;
    }
    for(int i=1;i<=n;i++)
    {
        a[i] = a[i-1]+d[i];
        min = std::min(min,a[i]);
    }
    cout << min << endl;
    return 0;
}
