#define _CRT_SECURE_NO_WARNINGS 1

#include "ClassObjects.h"


void Student::SetInfor(string name, int age, string address, float scores) {
    _name = name;
    _age = age;
    _address = address;
    _scores = scores;
}
void Student::ShowInfor() {
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
double Circle::getRadius()
{
    return _radius;
}
double Circle::getRarea()
{
    return _area;
}
void Circle::showCircle()
{
    cout << "°ë¾¶:>" << _radius << endl;
    cout << "Ãæ»ý:>" << _area << endl;
}

