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
    Point(int x, int y) : _x(x), _y(y) {}//带参数的构造函数
    Point(const Point& other) : _x(other._x), _y(other._y) {}//拷贝构造函数
    ~Point() { cout << "~Point()" << endl; }//析构函数
    int getX() const { return _x; }//默认内联函数
    void setX(int x) { _x = x; }
    int getY() const { return _y; }
    void setY(int y) { _y = y; }
    void show() { cout << "(" << _x << "," << _y << ")" << endl; }

private:
    int _x;
    int _y;
};


class Rectangle
{
public:
    // 手动写无参数的构造函数，即默认构造函数
    //Rectangle(){}
    // 带参数的构造函数
    //Rectangle(int length, int width):_length(length), _width(width) {}
    // 带默认参数的构造函数
    Rectangle(int length = 0, int width = 0):_length(length), _width(width) {}
    void show();
    void setElement(int length, int width);
    int area();

private:
    int _length;
    int _width;
};


struct ListNode
{
    struct ListNode* next;
    int _val;

    ListNode(int val)//带一个参数的构造函数
        :next(nullptr)
        , _val(val)
    {

    }
};

ListNode* CreateList(int n);//创建链表