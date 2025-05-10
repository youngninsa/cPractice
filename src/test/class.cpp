#include <bits/stdc++.h>

using namespace std;
using ll = long long;

class cat;

class dog
{
public:
    string name;
    string color;

    dog()=default;
    dog(const char *name, const char *color) : name(name), color(color){}
    void show(const cat &ca) const;
};

class cat
{
public:
    string name;
    string color;

    cat()=default;
    cat(const char *name, const char *color) : name(name), color(color){}
    friend class dog;
};

void dog::show(const cat &ca) const
{
    cout << "name:" << this->name << endl << "color:" << this->color << endl;
    cout << "its friend name:" << ca.name << endl << "its friend color:" << ca.color << endl;
}

int main()
{
    cat c("mimi", "white");
    dog d("wangwang","yellow");
    d.show(c);
    return 0;
}
