#define _CRT_SECURE_NO_WARNINGS 1

#include "ClassObjects.h"


void Student::SetInfor(string name, int age, string address, float scores) {
    _name = name;
    _age = age;
    _address = address;
    _scores = scores;
}
void Student::ShowInfor() const {
    cout << _name << endl;
    cout << _age << endl;
    cout << _address << endl;
    cout << _scores << endl;
}

void Circle::setRadius(double r)
{
    if (r < 0) {
        _radius = 0;
        _area = 0;
        return;
    }
    else {
        _radius = r;
        _area = r * r * PI;
    }
}
void Circle::setRarea(double a)
{
    if (a < 0) {
        _radius = 0;
        _area = 0;
        return;
    }
    else {
        _area = a;
        _radius = sqrt(a / PI);
    }
}
double Circle::getRadius() const
{
    return _radius;
}
double Circle::getRarea()
{
    return _area;
}
void Circle::showCircle() const
{
    cout << "半径:>" << _radius << endl;
    cout << "面积:>" << _area << endl;
}

void Point1::Set(int x, int y) {
    this->x = x;
    this->y = y;
}

//Rectangle::Rectangle()//无参数的构造函数
//{
//    _length = 0;
//    _width = 0;
//}
Rectangle::Rectangle(int length, int width)//带参数的构造函数
{
    _length = length;
    _width = width;
}

void Rectangle::set(int length, int width)
{
    _length = length;
    _width = width;
}
int Rectangle::area()
{
    return _length * _width;
}






