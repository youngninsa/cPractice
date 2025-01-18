#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void print(int n) {
    cout << n << endl;
}

int main()
{
    vector<int> vec,v;

    vec.push_back(10);
    vec.push_back(20);
    v.push_back(30);
    v.push_back(40);


    //for_each(vec.begin(),vec.end(), print);
    for(int i = 0;i < 100000;i++)
        vec.push_back(i);
    for(int i =0 ;i < 3;i++)
        v.push_back(i);

    cout << vec.capacity() << endl;
    cout << v.capacity() << endl;

    vector<int> (v).swap(vec);

    cout << vec.capacity() << endl;
    cout << v.capacity() << endl;
    return 0;
}
