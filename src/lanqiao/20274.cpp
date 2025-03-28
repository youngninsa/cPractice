#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int N = 1e5+7;
int n,t,backup[N],wait[N];

bool check(int mid)
{
    int sum=0,day=1;
    for(int i=0;i<n;i++)
    {
        if(backup[i]>mid)
            return false;
        if(sum+backup[i]>mid)
        {
            day++;
            sum=backup[i];
        }
        else
            sum+=backup[i];
        if(sum+wait[i]>mid && i<n-1)
        {
            sum+=wait[i];
            while(sum>mid)
            {
                day++;
                sum-=mid;
            }
        }
        else
            sum+=wait[i];
    }
    if(day>t)
        return false;
    else
        return true;
}

int main()
{
    int ans=-1;
    cin >> n >> t;
    for(int i=0;i<n;i++)
        cin >> backup[i];
    for(int i=0;i<n;i++)
        cin >> wait[i];
    int l=1,r=3600;
    while(l<=r)
    {
        int mid = (l+r)>>1;
        if(check(mid))
        {
            ans=mid;
            r=mid-1;
        }
        else
            l=mid+1;
    }
    cout << ans;
    return 0;
}
