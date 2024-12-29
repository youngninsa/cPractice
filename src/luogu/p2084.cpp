#include <iostream>
#include <string>

using namespace std;

int main()
{
    //接收m进制的数n 10110
    int m,len,num;
    string n={0};
    cin >> m >> n;
    len = n.length()-1;
    for(int i=0;i <= len;i++)
    {
        num = n[i] - 48;
        if(num != 0)
            cout << num << "*" << m << "^" << len - i;
        if(n[i+1] != '0' && len != i)
            cout << "+";
    }
    return 0;
}
