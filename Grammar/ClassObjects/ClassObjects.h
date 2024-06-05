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
    //�������������ⶨ��
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
    Point(int x, int y) : _x(x), _y(y) {}//�������Ĺ��캯��
    Point(const Point& other) : _x(other._x), _y(other._y) {}//�������캯��
    ~Point() { cout << "~Point()" << endl; }//��������
    int getX() const { return _x; }//Ĭ����������
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
    // �ֶ�д�޲����Ĺ��캯������Ĭ�Ϲ��캯��
    //Rectangle(){}
    // �������Ĺ��캯��
    //Rectangle(int length, int width):_length(length), _width(width) {}
    // ��Ĭ�ϲ����Ĺ��캯��
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

    ListNode(int val)//��һ�������Ĺ��캯��
        :next(nullptr)
        , _val(val)
    {

    }
};

ListNode* CreateList(int n);//��������