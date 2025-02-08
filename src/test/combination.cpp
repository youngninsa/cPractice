#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int n,r,a[23]={0};

void c(int bit)
{
    if(bit > r)
    {
        for(int i=1;i<=r;i++)
        {
            cout << setw(3) << a[i];
        }
        cout << endl;
        return ;
    }
    for(int i=a[bit-1]+1;i<=n;i++)
    {
        a[bit]=i;
        c(bit+1);
    }
}

int main()
{
    cin >> n >> r;
    c(1);
    return 0;
}
