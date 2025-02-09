#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int n,k,ans=0,a[23]={0},b[23]={0};

void c(int bit,int index)   //bit代表选第几位的数，index代表第bit位的数为a[index]
{
    if(bit > k)
    {
        for(int i=1;i<=k;i++)
            cout << b[i];
        cout << endl;
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
    c(1,1);
    cout << ans;
    return 0;
}