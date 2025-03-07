#include <bits/stdc++.h>

using namespace std;
using ll = long long;

class person
{
public:
    int ma;
    int mb;
    person(){}
    person(const int &a,const int &b)
    {
        ma = a;
        mb = b;
    }
};

person operator+(person A,person B)
{
    person temp;
    temp.ma = A.ma+B.ma;
    temp.mb = A.mb+B.mb;
    return temp;
}

ostream &operator <<(ostream &out,person &a)
{
    out << a.ma << endl;
    out << a.mb << endl;
    return out;
}

int main()
{
    
    cout << c;
    return 0;
}
