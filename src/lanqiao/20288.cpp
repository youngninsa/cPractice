#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int N = 1e3+9;

struct chip
{
    int decode;
    int trans;
};
bool junge(chip a)
{
    if(a.decode <= a.trans)
        return true;
    else
        return false;
}
bool cmp(chip a,chip b)
{
    return a.decode <= b.decode;
}
bool cmp1(chip a,chip b)
{
    return a.trans >= b.trans;
}
int main()
{
    int n;
    cin >> n;
    chip a[N],b[N];
    chip v[N];
    for(int i=0;i<n;i++)
        cin >> v[i].decode;
    for(int i=0;i<n;i++)
        cin >> v[i].trans;
    int k=0,t=0;
    for(int i=0;i<n;i++)
    {
        if(junge(v[i]))
            a[k++] = v[i];
        else
            b[t++] = v[i];
    }
    sort(a,a+k, cmp);
    sort(b,b+t, cmp1);
    for(int i=k;i<n;i++)
        a[i]=b[i-k];
    int timed=0,timet=0;
    for(int i=0;i<n;i++)
    {
        timed += a[i].decode;
        timet = max(timed,timet)+a[i].trans;
    }
    cout << timet;
    return 0;
}
