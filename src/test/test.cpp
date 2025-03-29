#include<bits/stdc++.h>

using namespace std;
using ll = long long;
using ull = unsigned long long;
ll llans=1;
double dbans=1.0;

double p(int n,double x)
{
    if(n==0)
        return 1;
    if(n==1)
        return x;
    return (2*n-1)*x*p(n-1,x)/n - (n-1)*p(n-2,x)/n;
}

ll getpower(int x,int y)
{
    if(y==0)
        return 1;
    if(y&1)
        llans *= x;
    getpower(x*x,y>>1);
    return llans;
}

double getpower(double x,int y)
{
    if(y==0)
        return 1;
    if(y&1)
        dbans *= x;
    getpower(x*x,y>>1);
    return dbans;
}

void solve4()
{
    int n;
    double x;
    cin >> n >> x;
    cout << "p" << n << "(" << x << ")=" << p(n,x);
}

void solve5()
{
    int a,m;
    double b;
    cout << "请输入(int型)底数和(double型)底数:";
    cin >> a >> b;
    cout << "请输入(int型)指数:";
    cin >> m;
    cout << a << "的" << m << "次幂为:" << getpower(a, m) << endl;
    cout <<  b << "的" << m << "次幂为:" << getpower(b,m);
}

void solve6()
{
    int n,sum=0,matrix[11][11]={0};
    cout << "请输入矩阵的大小:";
    cin >> n;
    cout << "请输入矩阵元素:\n";
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            cin >> matrix[i][j];
    for(int i=0;i<n;i++)
        sum += matrix[i][i]+matrix[i][n-1-i];
    if(n&1)
        sum -= matrix[n/2][n/2];
    cout << sum;
}

int main()
{
//    solve4();
//    solve5();
    solve6();
    return 0;
}
