#include <bits/stdc++.h>

using namespace std;
using ll = long long;
ll dp[4]={0};

int main()
{
    string s;
    for(int i=1;i<=2023;i++)
        s+=to_string(i);
//    cin >> s;
    for(auto i:s)
    {
        if(i == '2')
        {
            dp[0]++;
            dp[2]+=dp[1];
        }
        if(i == '0')
            dp[1]+=dp[0];
        if(i == '3')
            dp[3]+=dp[2];
    }
    cout << dp[3];
    return 0;
}
