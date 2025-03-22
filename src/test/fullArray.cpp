#include <bits/stdc++.h>

using namespace std;
using ll = long long;

char a[23]={'1','2','3','4'};
ll ans = 0;

void f(int n)
{
    if(n == strlen(a))
    {
        cout << a << endl;
        ans++;
        return ;
    }

    for(int i = n;i< strlen(a);i++)
    {
        char temp = a[i];
        a[i] = a[n];
        a[n] = temp;

        f(n+1);

        temp = a[i];
        a[i] = a[n];
        a[n] = temp;
    }
}

int main()
{
    f(0);
    cout  << ans << endl;
    return 0;
}
