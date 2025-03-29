#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ull = unsigned long long;

string add(string str1,string str2)
{
    string str;
    ull len1=str1.length();
    ull len2=str2.length();
    if(len1 > len2)
        for(int i=1;i<=len1-len2;i++)
            str2 += "0";
    else
        for(int i=1;i<=len2-len1;i++)
            str1 += "0";
    ull len = str1.length();
    int sum=0,temp=0;
    for(ll i=len-1;i>=0;i--)
    {
        sum = str1[i]-'0'+str2[i]-'0'+temp;
        temp = sum/10;
        sum %= 10;
        str += char(sum+'0');
    }
    if(temp!=0)
        str = char(temp + '0') + str;
    return str;
}

int main()
{
    string a,b;
    cin >> a >> b;
    cout << add(a,b);
    return 0;
}
