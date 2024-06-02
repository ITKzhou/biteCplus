#pragma once
#include<iostream>
#include <cstring>
#include <cstdlib>
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

class Point {
public:
    Point(int x, int y) : _x(x), _y(y) {}//��Ĭ�ϲ����Ĺ��캯��
    Point(const Point& other) : _x(other._x), _y(other._y) {}//�������캯��
    ~Point() { cout << "~Point()" << endl; }//��������
    int getX() const { return _x; }//Ĭ����������
    void setX(int x) { _x = x; }
    int getY() const { return _y; }
    void setY(int y) { _y = y; }
    void show() { cout << "(" << _x << "," << _y << ")" << endl; }

private:
    int _x, _y;
};



class Point1
{
    //������������ϲ�
public:
    void Set(int x, int y);
    void Show() {
        int x = 1;
        int y = 1;
        cout << "(" << x << "," << y << ")" << endl;//����ʹ�þֲ�����
        cout << "(" << this->x << "," << this->y << ")" << endl;//��Ա�������Ա�������β�����ʱ����thisָ������
    }

private:
    int x;
    int y;
};


class Rectangle
{
public:
    //Rectangle();//�ֶ�д�޲����Ĺ��캯������Ĭ�Ϲ��캯��
    //Rectangle(int length, int width);//�������Ĺ��캯��
    Rectangle(int length = 0, int width = 0);//��Ĭ�ϲ����Ĺ��캯�������Ķ�����������Ĺ��캯����һ�� ǰ����������ֻ��ѡ��һ
    void set(int length, int width);
    int area();

private:
    int _length;
    int _width;
};

class MyClass {
public:
    int value;

    MyClass(int val) : value(val) {}//��Ա��ʼ�����ʽ

    void setValue(int val) {
        this->value = val;  // ʹ��thisָ�������ʳ�Ա����
    }

    void showValue() const {//������Ա����,�����޸Ķ�����κγ�Ա
        cout << this->value << endl;
    }

    MyClass& increment() {
        this->value++;
        return *this;  // ���ض������������
    }

    static void staticFunction() {
        // û��thisָ��
        cout << "���þ�̬��Ա����" << endl;
    }
};



//ģ�庯��
template <typename T>
inline T max(T a, T b) {
    return (a > b) ? a : b;
}
