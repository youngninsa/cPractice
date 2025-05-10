#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    int h,w,cnt=0,ans=0;
    char t[]="LANQIAO";
    char s[1005];
    cin >> h >> w;
    for(int i=0;i<h+w;i++)
        s[i]=t[i%7];
    for(int i=0;i<w;i++)
        if(s[i]=='A')
            cnt++;
    for(int i=0;i<h;i++)
    {
        ans+=cnt;
        int l=i,r=i+w-1;
        if(s[l]=='A')
            cnt--;
        if(s[r+1]=='A')
            cnt++;
    }
    cout << ans;
    return 0;
}
