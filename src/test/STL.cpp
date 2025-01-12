#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void print(int n) {
    cout << n << endl;
}

int main()
{
    vector<int> v;

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);

    for_each(v.begin(),v.end(), print);

    return 0;
}
