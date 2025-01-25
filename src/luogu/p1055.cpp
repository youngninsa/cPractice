#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main()
{
    string s;
    ll count=1,sum=0;
    char ic;
    cin >> s;
    for(int i = 0;i < s.size()-1;i++)
    {
        if(s[i] != '-')
        {
            sum += (s[i] - '0') * count;
            count++;
        }
    }
    ic = '0' + sum % 11;
    if(ic == '0' + 10)
        ic = 'X';
    if(ic == s[12])
        cout << "Right";
    else
    {
        s[12] = ic;
        cout << s;
    }
    return 0;
}
