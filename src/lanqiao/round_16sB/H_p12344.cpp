#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    char maxx='a';
    string s;
    cin >> s;
    map<char,int> m;
    for(int i=0;i<s.length();i++)
        m[s[i]]++;
    for(int i=0;i<s.length();i++)
        maxx= max(maxx,s[i]);
    if(m.size() == 1)
        cout << s;
    else if(m[maxx] == 1)
        cout << maxx;
    else
        for(int i=0;i<m[maxx];i++)
            cout << maxx;
    return 0;
}
