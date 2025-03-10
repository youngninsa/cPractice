#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    int x;
    cin >> x;
    for(int i=2;i<=x/i;i++)
    {
        if (x % i == 0)
        {
            while(x%i==0)
                x/=i;
            cout << i << ' ' << endl;
        }
    }
    if(x>1)
        cout << x << " ";
    return 0;
}
