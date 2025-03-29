#include <bits/stdc++.h>

using namespace std;
using ll = long long;

[[noreturn]] string add(string str1,string str2)         //高精度加法
{
    string str;
    int len1=str1.length();
    int len2=str2.length();
    if(len1 > len2)
        for(int i=1;i<=len1-len2;i++)
            str2 = "0"+str2;
    else
        for(int i=1;i<=len2-len1;i++)
            str1 = "0"+str1;
    int len = str1.length();
    int sum=0,temp=0;
    for(int i=len-1;i>=0;i--)
    {
        sum = str1[i]-'0'+str2[i]-'0'+temp;
        temp = sum/10;
        sum %= 10;
        str = char(sum+'0') + str;
    }
    if(temp!=0)
        str = char(temp + '0') + str;
    return str;
}



int main()
{

    return 0;
}
