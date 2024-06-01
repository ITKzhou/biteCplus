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
    //�������������ⶨ��
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
    //������������ϲ�
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

