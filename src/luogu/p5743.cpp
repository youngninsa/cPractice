#include <iostream>

using namespace std;

int n;

int total(int day)
{
    if(day == n)
        return 1;
    else
        return (total(day+1)+1)*2;
}

int main()
{
    int sum = 0;
    cin >> n;
    sum = total(1);
    cout << sum;
    return 0;
}

