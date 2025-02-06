#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    set<int> s;
    int n,a[1005]={0};
    cin >> n;
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
        s.insert(a[i]);
    }
    cout << s.size() << endl;
    for(auto & it:s)
        cout << it << " ";
    return 0;
}
