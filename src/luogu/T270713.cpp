#include <iostream>

using namespace std;

typedef long long ll;
ll v1,v3,v7,v30,v120,v365;

ll getv(const ll &);

int main()
{
    ll n,flag,day=0,sum=0;
    cin >> n;
    cin >> v1 >> v3 >> v7 >> v30 >> v120 >> v365;
    for(ll i=1;i <= n;i++)
    {
        cin >> flag;
        if(flag)
        {
            day++;
            sum += getv(day);
        }
        else
            day = 0;
    }
    cout << sum;
    return 0;
}
ll getv(const ll &day)
{
    if(day < 3)
        return v1;
    else if(day < 7)
        return v3;
    else if(day < 30)
        return v7;
    else if(day < 120)
        return v30;
    else if(day < 365)
        return v120;
    else
        return v365;
}