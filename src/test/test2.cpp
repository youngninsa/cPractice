#include <bits/stdc++.h>

using namespace std;
using ll = long long;

template<typename T>
auto max_my(T* start,T* end)
{
    T ans=-1e9-7;
    for(T* i=start;i<end;i++)
        ans = max(*i,ans);
    return ans;
}

int main()
{
    int arr[10] = {3,9,5,2,7,4,6,5,1,8};
    cout << max_my(arr,arr+5);
    return 0;
}
