#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    string s;
    int dp[3]={0};
    cin >> s;
    for(int i=0;i<s.length();i++)
    {
        if(s[i] == 'l')
            dp[0]++;
        if(s[i] == 'a')
            dp[1]+=dp[0];
        if(s[i] == 'n')
            dp[2]+=dp[1];
    }
    cout << dp[2];
    return 0;
}
