#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    string s;
    cin >> s;
    int alen=0,ans;
    for(auto it:s)
    {
        if(it=='a')
            alen++;
        else
        {
            ans = max(ans,alen);
            alen=0;
        }
    }
    ans = max(ans,alen);
    string t(ans+1,'a');
    cout << t;
    return 0;
}
