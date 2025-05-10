#include<bits/stdc++.h>

using namespace std;
using ll = long long;

class counter
{
private:
    int n;
public:
    int getV() const{return this->n;}
    counter(int a){this->n=a;}
    counter& operator ++(){++n;return *this;}
    counter operator ++(int){counter t = *this;++n;return t;}
    counter& operator --(){--n;return *this;}
    counter operator --(int){counter t = *this;--n;return t;}
};
ostream& operator<<(ostream &out,counter t)
{
    out << t.getV();
    return out;
}
int main()
{
    counter c(3);
    cout << c << endl;
    cout << c++ << endl;
    cout << c << endl;
    cout << ++c << endl << endl;

    cout << c << endl;
    cout << c-- << endl;
    cout << c << endl;
    cout << --c;
    return 0;
}
