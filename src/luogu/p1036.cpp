#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int n,k,ans=0,a[23]={0},b[23]={0};

bool isPrime(ll num)
{
    for(int i=2;i<= sqrt(num);i++)
    {
        if(num%i == 0)
            return false;
    }
    return true;
}

void c(int bit,int index)
{
    if(bit > k)
    {
        ll sum = 0;
        for(int i=1;i<=k;i++)
            sum+=b[i];
        if(isPrime(sum))
            ans++;
        return ;
    }
    for(int i=index;i<=n;i++)
    {
        b[bit]=a[i];
        c(bit+1,i+1);
    }
}

int main()
{
    cin >> n >> k;
    for(int i=1;i<=n;i++)
        cin >> a[i];
    c(1,1);//
    cout << ans;
    return 0;
}
