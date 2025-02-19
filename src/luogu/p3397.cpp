#include <bits/stdc++.h>
#define f(a,b,c) for(int a=b;a<=c;a++)

using namespace std;
using ll = long long;

int main()
{
    int n,m;
    int x1,y1,x2,y2;
    cin >> n >> m;
    vector<vector<int>> a(n+5,vector<int> (n+5,0));
    vector<vector<int>> d(n+5,vector<int> (n+5,0));
    while(m--)
    {
        cin >> x1 >> y1 >> x2 >> y2;
        d[x1][y1]++;
        d[x1][y2+1]--;
        d[x2+1][y1]--;
        d[x2+1][y2+1]++;
    }
    f(i,1,n)
    {
        f(j,1,n)
        {
            a[i][j] = d[i][j]+a[i-1][j]+a[i][j-1]-a[i-1][j-1];
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
