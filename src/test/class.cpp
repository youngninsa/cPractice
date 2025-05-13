#include <bits/stdc++.h>

using namespace std;
using ll = long long;

class Shape {
public:
    virtual double getArea() const = 0;
    virtual double getLen() const = 0;
    virtual ~Shape() = default;
};

class Rectangle : public Shape {
private:
    double width, height;
public:
    Rectangle(double w, double h) : width(w), height(h) {}

    double getArea() const override {
        return width * height;
    }

    double getLen() const override {
        return 2 * (width + height);
    }
};

class Circle : public Shape {
private:
    double radius;
public:
    explicit Circle(double r) : radius(r) {}

    double getArea() const override {
        return M_PI * radius * radius;
    }

    double getLen() const override {
        return 2 * M_PI * radius;
    }
};

int main() {
    Rectangle rect1(3.0, 4.0);
    Rectangle rect2(5.5, 2.2);

    cout << "矩形1 (3x4) — 面积: " << rect1.getArea()
              << ", 周长: " << rect1.getLen() << '\n';
    cout << "矩形2 (5.5x2.2) — 面积: " << rect2.getArea()
              << ", 周长: " << rect2.getLen() << "\n\n";

    Circle circ1(2.0);
    Circle circ2(4.5);

    cout << "圆1 (r=2) — 面积: " << circ1.getArea()
              << ", 周长: " << circ1.getLen() << '\n';
    cout << "圆2 (r=4.5) — 面积: " << circ2.getArea()
              << ", 周长: " << circ2.getLen() << '\n';

    return 0;
}

