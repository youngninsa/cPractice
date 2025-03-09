#include <bits/stdc++.h>

using namespace std;
using ll = long long;
int main()
{
    char ans,user;
    ll pretm=0,tm=0,cnt=0,k=0;
    ifstream ifs;
    ifs.open("test.txt",ios::in);
    bool flag=true;
    while(ifs >> ans >> user >> tm)
    {
        if(flag)
        {
            pretm = tm;
            flag = false;
        }
        if(ans == user && tm-pretm <= 1000)
            k++;
        else
            k=0;
        pretm = tm;
        cnt = max(cnt,k);
    }
    cnt = max(cnt,k);
    ifs.close();
    cout << cnt;
    return 0;
}
