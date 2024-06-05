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
    cout << "�뾶:>" << _radius << endl;
    cout << "���:>" << _area << endl;
}




void Rectangle::show()
{
    cout << "��:" << _length << endl;
    cout << "��:" << _width << endl;
}

void Rectangle::setElement(int length, int width)
{
    _length = length;
    _width = width;
}

int Rectangle::area()
{
    return _length * _width;
}


//β�壬��������ͷ��������
ListNode* CreateList(int n)
{
    ListNode head(-1);//�ֲ�������ͷ��㣬���˺������Զ�����
    ListNode* tail = &head;
    int val;
    for (size_t i = 0; i < n; i++)
    {
        cin >> val;
        tail->next = new ListNode(val);
        tail = tail->next;
    }
    return head.next;
}



