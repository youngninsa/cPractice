#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int N = 1e2+9;

int main()
{
    int n,m,minn=100,maxx=0;
    cin >> n >> m;
    int arr[N]={0};
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
        minn=min(minn,arr[i]);
        maxx=max(maxx,arr[i]);
    }
    if(m<=maxx && m>=minn)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}
