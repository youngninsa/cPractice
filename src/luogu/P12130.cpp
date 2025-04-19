#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    double l,r = sqrt(pow(233,2)+ pow(666,2));
    int ans;
    l= atan(666.0/233)*r;
    ans = lround(r+l);
    cout << ans;
    return 0;
}
