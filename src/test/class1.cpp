#include <bits/stdc++.h>

using namespace std;
using ll = long long;

class Fruit {
protected:
    char name[30];
    float price;

    Fruit(const char* _name, float _price) {
        strncpy(name, _name, sizeof(name) - 1);
        name[sizeof(name) - 1] = '\0';
        price = _price;
    }

public:
    virtual float getPrice() const = 0;
    virtual ~Fruit() {}
    friend void printFruitInfo(const Fruit& f);
};

void printFruitInfo(const Fruit& f) {
    cout << "名称： " << f.name << "，单价： " << f.price << endl;
}

class Apple : public Fruit {
public:
    Apple(const char* _name, float _price) : Fruit(_name, _price) {}
    float getPrice() const override {
        return price;
    }
};

class Orange : public Fruit {
public:
    Orange(const char* _name, float _price) : Fruit(_name, _price) {}
    float getPrice() const override {
        return price;
    }
};

class Banana : public Fruit {
public:
    Banana(const char* _name, float _price) : Fruit(_name, _price) {}
    float getPrice() const override {
        return price;
    }
};

class Shape {
public:
    virtual double getArea() const = 0;
    virtual double getPerim() const = 0;
    virtual ~Shape() {}
};

class Rectangle : public Shape {
private:
    double width;
    double height;

public:
    Rectangle(double _w, double _h) : width(_w), height(_h) {}
    double getArea() const override {
        return width * height;
    }
    double getPerim() const override {
        return 2.0 * (width + height);
    }
};

class Circle : public Shape {
private:
    double radius;

public:
    Circle(double _r) : radius(_r) {}
    double getArea() const override {
        return M_PI * radius * radius;
    }
    double getPerim() const override {
        return 2.0 * M_PI * radius;
    }
};

int main() {
    cout << "=== 第 1 部分：测试 Fruit 及其子类 ===" << endl;
    Apple   a1("红富士苹果", 5.50f);
    Orange  o1("脐橙",     4.20f);
    Banana  b1("香蕉",     3.80f);
    printFruitInfo(a1);
    printFruitInfo(o1);
    printFruitInfo(b1);

    cout << endl;
    cout << "=== 第 2 部分：测试 Shape 及其子类 ===" << endl;
    Rectangle rect(3.0, 5.0);
    Circle    cir(2.0);
    cout << "Rectangle: 长 = 3.0, 宽 = 5.0" << endl;
    cout << "面积 = " << rect.getArea()
         << "，周长 = " << rect.getPerim() << endl;
    cout << "Circle: 半径 = 2.0" << endl;
    cout << "面积 = " << cir.getArea()
         << "，周长 = " << cir.getPerim() << endl;
    return 0;
}


