#include <iostream>

using namespace std;

int a[9]={1,2,3,4,5,6,7,8,9};
int ans=0;

int check()
{
    int B_GHI=a[1] * (a[6] * 100 + a[7] * 10 + a[8]);
    int C_DEF=a[2] * (a[3] * 100 + a[4] * 10 + a[5]);
    int C_GHI=a[2] * (a[6] * 100 + a[7] * 10 + a[8]);
    if(B_GHI + C_DEF == (10 - a[0]) * C_GHI)
        return 1;
    else
        return 0;
}

void f(int n)
{
    if(n==9)
        if(check())
        {
            ans++;
            return;
        }

    for(int i=n;i<9;i++)
    {
        int temp=a[i];
        a[i]=a[n];
        a[n]=temp;

        f(n+1);//递归

        temp=a[i];//回溯
        a[i]=a[n];
        a[n]=temp;
    }
}

int main(int argc, char *argv[])
{
    f(0);
    cout<<ans;
    return 0;
}
