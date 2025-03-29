#include <bits/stdc++.h>

using namespace std;
using ll = long long;

class student{
private:
    int a={10},b={20};
public:
    student(){cout << "student()\n" << a << b;}
    student(int a,int b){a=a;b=b;cout << "student(int,int)\n" << a << b;}
};

int main()
{
    student stu = student();
    return 0;
}
