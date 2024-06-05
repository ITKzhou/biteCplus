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




void Rectangle::show()
{
    cout << "长:" << _length << endl;
    cout << "宽:" << _width << endl;
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


//尾插，创建不带头结点的链表
ListNode* CreateList(int n)
{
    ListNode head(-1);//局部变量的头结点，出了函数就自动销毁
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



