#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int N = 1e9+7;

int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        int ansa,ansb,ansc,a,b,c,k;
        cin >> a >> b >> c >> k;
        while(k--)
        {
            if(a==b && b==c)
                break;
            ansa = (b+c)>>1;
            ansb = (a+c)>>1;
            ansc = (a+b)>>1;
            a=ansa;
            b=ansb;
            c=ansc;
        }
        cout << a << " " << b << " " << c << endl;
    }
    return 0;
}
