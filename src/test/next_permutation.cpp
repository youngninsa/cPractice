#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{

    int n=3;
    int a[]={1,2,3};
    do
    {
        for(int i:a)
            cout << i;
        cout << endl;
    }while(next_permutation(a,a+n));
    return 0;
}
