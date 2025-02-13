#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
    int n, x, l, w;
    double area;
    cin >> n >> x;
    while (n--) {
        cin >> l >> w;
        area = l * w;
        while (area > x)
            area /= 2;
        if (area == x)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}