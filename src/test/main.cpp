#include <iostream>

using namespace std;

int main()
{
    int a = 10;
    int b = 20;
//    int* const p = &a;
    const int* p = &a;
    p = &b;
    cout << "*p = " << *p << endl;

    return 0;
}
