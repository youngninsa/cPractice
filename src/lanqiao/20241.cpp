#include <iostream>
#include <algorithm>
using namespace std;

int a[100005];

int main() {
    int n,k;
    cin >> n >> k;
    for (int i=1; i<=n; i++)
        cin >> a[i], a[i] %= k;
    sort(a+1, a+1+n);
    int mx = a[1]+k-a[n];
    for (int i=2; i<=n; i++)
        mx = max(mx, a[i]-a[i-1]);
    cout << k-mx << '\n';
    return 0;
}