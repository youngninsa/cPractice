#include<bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector v(n+1,vector<int>(1));
    for(int i=1;i<=n;i++)
        for(int j=1;j<=i;j++)
            cin >> v[i][j];
    for(int i=1;i<n;i++)
        for(int j=1;j<=i;j++)
            if (v[i][j]>v[i+1][j+1] && v[i][j]>v[i+1][j])
            {
                cout<<"No"<<endl;
                return;
            }
    cout<<"Yes"<<endl;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}
