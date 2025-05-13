#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int maxn = 2010;

int a[maxn],b[maxn],c[maxn]={0};

int main()
{
    string A,B;
    cin >> A >> B;
    int lena = A.length();
    int lenb = B.length();
    int len = lena + lenb;
    for(int i=1;i<=lena;i++)
        a[i] = A[lena-i]-'0';
    for(int i=1;i<=lenb;i++)
        b[i] = B[lenb-i]-'0';
    for(int i=1;i<=lena;i++)
        for(int j=1;j<=lenb;j++)
            c[i+j-1] += a[i] * b[j];
    for(int i=1;i<=len;i++)
    {
        c[i+1] += c[i]/10;
        c[i] %= 10;
    }
    while(!c[len])
        len--;
    for(int i=max(1,len);i>=1;i--)
        cout << c[i];
    return 0;
}
