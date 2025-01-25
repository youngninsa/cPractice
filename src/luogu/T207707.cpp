#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

bool isPrime(int);

int main()
{
    map<char,int> m;
    string s;
    char ch;
    int max=0,min=100;
    cin >> s;
    for(int i=0;(ch = s[i]) != '\0';i++)
        m[ch]++;
    for(auto & it : m)
    {
        if(it.second > max)
            max = it.second;
        if(it.second < min)
            min = it.second;
    }
    if(isPrime(max - min))
    {
        cout << "Lucky Word" << endl << max - min;
    }
    else
    {
        cout << "No Answer" << endl << 0;
    }
    return 0;
}

bool isPrime(int num)
{
    if(num < 2)
        return false;
    int temp = sqrt(num);
    for(int i=2;i < temp;i++)
    {
        if(num % i == 0)
            return false;
    }
     return true;
}