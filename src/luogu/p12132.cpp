#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    int n,temp,ans=0;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        cin >> temp;
        if(temp!=1)
            ans++;
    }
    cout << ans;
    return 0;
}
