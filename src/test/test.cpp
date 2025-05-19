#include<bits/stdc++.h>

using namespace std;
using ll = long long;

template <typename T>
auto sum(T* start,T* end,T step)
{
    ll sum=0;
    for(T* i=start;i<end;i+=step)
        sum += *i;
    return sum;
}

int main()
{
    int a[10]={1,2,3,4,5,6,7,8,9,10};
    cout << sum(a,a+5,2);
    return 0;
}
