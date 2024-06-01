#pragma once
#include<iostream>
#include <cmath>
using namespace std;

#define PI 3.1415926

class Circle
{
public:
    void setRadius(double radius);
    void setRarea(double area);
    double getRadius();
    double getRarea();
    void showCircle();

private:
    double _radius;
    double _area;
};


class Student
{
    //类内声明，类外定义
public:
    void SetInfor(string name, int age, string address, float scores);
    void ShowInfor();

private:
    string _name;
    int _age;
    string _address;
    float _scores;
};

class Point
{
    //类内声明定义合并
public:
    void Set(int a, int b) {
        _x = a;
        _y = b;
    }
    void Show() {
        cout << "(" << _x << "," << _y << ")" << endl;
    }

private:
    int _x;
    int _y;
};

