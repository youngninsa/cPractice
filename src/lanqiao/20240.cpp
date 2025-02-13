#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
    int N;
    cin >> N;
    vector<int> a(N);
    for (int i = 0; i < N; i++) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    priority_queue<int, vector<int>, greater<>> min_heap;

    for (auto &elem:a)
    {
        if (!min_heap.empty() && min_heap.top() < elem)
        {
            int len = min_heap.top();
            min_heap.pop();
            min_heap.push(len+1);
        }
        else
            min_heap.push(1);
    }
    cout << min_heap.size() << endl;
    return 0;
}
