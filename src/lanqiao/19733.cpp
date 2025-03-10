#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int o[10]={1,0,0,0,1,0,1,0,2,1};

int getcnt(ll num)
{
    int count=0;
    while(num)
    {
        count += o[num%10];
        num/=10;
    }
    return count;
}

bool cmp(ll a,ll b)
{
    int cnt1=0,cnt2=0;
    cnt1 = getcnt(a);
    cnt2 = getcnt(b);
    if(cnt1 < cnt2)
        return true;
    else
        if(cnt1 > cnt2)
            return false;
        else
            if(a<b)
                return true;
            else
                return false;
}
int main()
{
    int n;
    cin >> n;
    vector<ll> a(n);
    for(int i=0;i<n;i++)
        cin >> a[i];
    sort(a.begin(),a.end(), cmp);
    for(int i=0;i<n;i++)
        cout << a[i] << " ";
    return 0;
}
