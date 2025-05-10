#include <bits/stdc++.h>

using namespace std;
using ll = long long;

bool cmp(int a,int b)
{
    return a>b;
}

int main()
{
    int n,i;
    cin >> n;
    vector<int> a(n),b(n);
    for(i=0;i<n;i++)
        cin >> a[i];
    for(i=0;i<n;i++)
        cin >> b[i];
    sort(a.begin(),a.end(), cmp);
    sort(b.begin(),b.end(),cmp);
    for(i=0;i<n;i++)
        if(b[i]<=a[0])
            break;
    cout << i;
    return 0;
}
