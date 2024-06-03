#pragma once
#include<iostream>
#include <cstring>
#include <cstdlib>
#include <cassert>
#include <cmath>
using namespace std;

#define PI 3.1415926

class Circle
{
public:
    void setRadius(double radius);
    void setRarea(double area);
    double getRadius() const;
    double getRarea();
    void showCircle() const;

private:
    double _radius;
    double _area;
};


class Student
{
    //类内声明，类外定义
public:
    void SetInfor(string name, int age, string address, float scores);
    void ShowInfor() const;

private:
    string _name;
    int _age;
    string _address;
    float _scores;
};

class Point {
public:
    Point(int x, int y) : _x(x), _y(y) {}//带默认参数的构造函数
    Point(const Point& other) : _x(other._x), _y(other._y) {}//拷贝构造函数
    ~Point() { cout << "~Point()" << endl; }//析构函数
    int getX() const { return _x; }//默认内联函数
    void setX(int x) { _x = x; }
    int getY() const { return _y; }
    void setY(int y) { _y = y; }
    void show() { cout << "(" << _x << "," << _y << ")" << endl; }

private:
    int _x, _y;
};



class Point1
{
    //类内声明定义合并
public:
    void Set(int x, int y);
    void Show() {
        int x = 1;
        int y = 1;
        cout << "(" << x << "," << y << ")" << endl;//优先使用局部变量
        cout << "(" << this->x << "," << this->y << ")" << endl;//成员变量与成员函数的形参重名时，用this指针区分
    }

private:
    int x;
    int y;
};


class Rectangle
{
public:
    //Rectangle();//手动写无参数的构造函数，即默认构造函数
    //Rectangle(int length, int width);//带参数的构造函数
    Rectangle(int length = 0, int width = 0);//带默认参数的构造函数，它的定义跟带参数的构造函数的一样 前面两个与它只能选其一
    void set(int length, int width);
    int area();

private:
    int _length;
    int _width;
};

class MyClass {
public:
    int value;

    MyClass(int val) : value(val) {}//成员初始化表达式

    void setValue(int val) {
        this->value = val;  // 使用this指针来访问成员变量
    }

    void showValue() const {//常量成员函数,不能修改对象的任何成员
        cout << this->value << endl;
    }

    MyClass& increment() {
        this->value++;
        return *this;  // 返回对象自身的引用
    }

    static void staticFunction() {
        // 没有this指针
        cout << "调用静态成员函数" << endl;
    }
};



//模板函数
template <typename T>
inline T max(T a, T b) {
    return (a > b) ? a : b;
}


class Data1
{
public:
    Data1() :_year(1), _month(1), _day(1){}

    Data1(int year, int month, int day) :_year(year), _month(month), _day(day){}

    Data1(const Data1& other):_year(other._year), _month(other._month), _day(other._day) {}//拷贝构造函数

    Data1(const Data1&& other) noexcept :_year(other._year), _month(other._month), _day(other._day) {} //移动构造函数

   

    ~Data1() 
    { 
        cout << "this" << endl;
        cout << "~Data" << endl; 
    }

    void show(){ cout << _year << "-" << _month << "-" << _day << endl; }
private:
    int _year, _month, _day;
};