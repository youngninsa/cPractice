#include <bits/stdc++.h>

using namespace std;
using ll = long long;

bool is(int n)
{
    int t=n%10;
    n/=10;
    while(n)
    {
        if(t!=n%10)
            return false;
        n/=10;
    }
    return true;
}

int main()
{
    ll ans=0;
    for(int i=1;10*i+45<=20255202;i++)
    {
        if(is(10*i+45))
            ans+=10*i+45;
    }
    cout << ans;
    return 0;
}
