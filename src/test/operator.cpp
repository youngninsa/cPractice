#include <bits/stdc++.h>

using namespace std;
using ll = long long;

class person
{
public:
    int ma=0;
    int mb=0;
    person()= default;
    person(const int &a,const int &b)
    {
        ma = a;
        mb = b;
    }
    ~person()=default;
};

person operator+(person A,person B)
{
    person temp;
    temp.ma = A.ma+B.ma;
    temp.mb = A.mb+B.mb;
    return temp;
}
person operator-(person A,person B)
{
    person temp;
    temp.ma = A.ma - B.ma;
    temp.mb = A.mb - B.mb;
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
    person a(1,2),b(3,4),c;
    c=a+b;
    cout << c;
    c=a-b;
    cout << c;
    return 0;
}
