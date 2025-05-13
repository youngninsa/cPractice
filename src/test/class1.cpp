#include <bits/stdc++.h>

using namespace std;
using ll = long long;

class Teacher {
protected:
    string name;
    int age;
public:
    Teacher(const string& name, int age)
            : name(name), age(age) {}

    virtual void responsibility() const {
        cout << "教师职责：教学\n";
    }

    virtual void showInfo() const {
        cout << "Teacher — 姓名: " << name << ", 年龄: " << age << '\n';
    }

    virtual ~Teacher() = default;
};

class Student {
protected:
    string name;
    string id;
public:
    Student(const string& name, const string& id)
            : name(name), id(id) {}

    virtual void responsibility() const {
        cout << "学生职责：学习\n";
    }

    virtual void showInfo() const {
        cout << "Student — 姓名: " << name << ", 学号: " << id << '\n';
    }

    virtual ~Student() = default;
};

class Graduate : public Teacher, public Student {
public:
    Graduate(const string& name, int age, const string& id)
            : Teacher(name, age), Student(name, id) {}
            
    void responsibility() const override {
        cout << "研究生职责：教学、学习\n";
    }

    void showInfo() const override {
        cout << "Graduate — 姓名: " << Teacher::name<< ", 年龄: " << age<< ", 学号: " << Student::id << '\n';
    }
};

int main() {
    Teacher t("张老师", 45);
    Student s("李同学", "2025001");
    Graduate g("王研一", 28, "G2025007");
    t.showInfo();
    t.responsibility();cout << '\n';
    s.showInfo();
    s.responsibility();cout << '\n';
    g.showInfo();
    g.responsibility();cout << '\n';
    return 0;
}

