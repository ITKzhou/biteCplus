#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <cassert>
#include <cmath>
using namespace std;

class Line;//声明Line类，若Point类中需要创建Line对象时

class Point
{
private:
	int _x;
	int _y;
	static int _z;
	friend Line;

public:
	//Point(){}//Point类对象的默认构造函数
	//Point(int x, int y) :_x(x), _y(y) {}//参数构造函数
	Point(int x = 0, int y = 0) :_x(x), _y(y){}//缺省构造函数
	Point(const Point& p);
	void print()const;
	void set_x(int x);
	void set_y(int y);

	static void put()//静态成员函数要在类内定义
	{
		cout << "z= " << _z << endl;//只能访问本类的静态数据成员
	}

	void setfun(int x = 9, int y = 9);

	
	//友元之普通函数
	//友元函数在的声明可以放在类内任何位置
	//声明友元函数，必须类外定义，定义不加friend，定义不能直接访问私有成员，要创建对象
	friend Point add(const Point& a, const Point& b);

	//友元之其他类的成员函数,需要指定Line类域，因为它是Line类的成员函数

	//Line是Point的友元类，Line的成员函数都能访问Point的私有成员
	
};

int Point::_z = 100;//静态数据成员在类外定义,要指定类域


class Line
{
public:
	Line() = default;
	//Point对象的初始化放在Line类构造函数的初始化列表
	Line(int x1, int y1, int x2, int y2) :_point1(x1, y1), _point2(x2, y2) {}
	Line(const Line& line);

	//Line类的成员函数作为Point类的友元函数

	
	double distan() const;//Line是Point的友元类，Line的成员函数都能访问Point的私有成员
	void func_set_point(Point& point, int x, int y);
	void func_print_point(Point& point);
	void draw();


private:
	Point _point1;
	Point _point2;

};



Point::Point(const Point& p)
{
	_x = p._x;
	_y = p._y;
}

void Point::print() const
{
	cout << "(" << _x << "," << _y << ")" << endl;
}

void Point::set_x(int x)
{
	_x = x;
}

void Point::set_y(int y)
{
	_y = y;
}

void Point::setfun(int x, int y)
{
	_x = x;
	_y = y;
}

Point add(const Point& a, const Point& b)//定义友元函数，不用指定类域，不是Point类的成员函数
{
	Point c;
	c._x = a._x + b._x;
	c._y = a._y + b._y;
	return c;
}






Line::Line(const Line& line)
{
	_point1 = line._point1;
	_point2 = line._point2;
}

void Line::draw()
{
	_point1.print();
	cout << "to";
	_point2.print();
	cout << endl;
}

double Line::distan() const
{
	double s;

	s = sqrt((_point1._x - _point2._x)* (_point1._x - _point2._x)
		+ (_point1._y - _point2._y)* (_point1._y - _point2._y));
	return s;
}

void Line::func_set_point(Point& point, int x, int y)
{
	point.setfun(x, y);
}

void Line::func_print_point(Point& point)
{
	point.print();
}





static void Test1()
{
	Line l1(1, 2, 3, 4);
	l1.draw();
	Line l2(l1);
	l2.draw();
}




static void Test2()
{
	Line l1(1, 2, 3, 4);
	l1.draw();
	Point p1(1, 1);
	p1.put();//通过对象访问静态成员函数
	Point::put();//通过指定类域访问
}


void Test3()
{
	Point* pa = new Point[2]{ Point(5,5),Point(6,6) };//指向对象的指针
	pa[0].print();
	pa[1].print();

	//对象数组，会自动调用无参构造函数和带默认参数构造函数，必要时必须显式定义默认构造函数
	Point arr[3] = { Point(1,1) ,Point(2,2) ,Point(3,3) };
	for (int i = 0; i < 3; i++)
	{
		arr[i].print();
	}

}

//对象链表
struct LNode
{
	double value;
	struct LNode* next;

	LNode(double val, struct LNode* next1 = nullptr)
	{
		value = val;
		next = next1;
	}
};



void Test4()
{
	Point p1;
	Point p2(1, 2);
	Point* p3 = new Point(3, 4);
	Point* p4 = new Point;
	Point* p5 = (Point*)malloc(sizeof(Point));//不算创建对象，创建对象必须调用构造函数，
	assert(p5);

	p1.print();
	p2.print();
	p3->print(); 
	p4->print();
	p5->setfun();
	p5->print();

	delete p3;
	delete p4;
	free(p5);

	p3 = p4 = nullptr;
	p5 = nullptr;
	cout << p3 << endl;
	cout << p4 << endl;
	cout << p5 << endl;
	
}

void Test5()
{
	Point a(1, 1);
	Point b(a);
	Point c = add(a, b);//调用友元函数
	a.print();
	b.print();//1	1
	c.print();//2	2

	Line l1(1, 1, 2, 2);
	double s = l1.distan();//Line是Point的友元类
	cout << "s =" << s << endl;
	
	l1.func_set_point(a, 10, 10);
	l1.func_print_point(a);

}


//int main()
//{
//	//Test1();//测试类对象成员
//
//	//Test2();//测试静态成员函数
//
//	//Test3();//指向对象的指针、对象数组
//
//	//Test4();//测试内存释放
//
//	//Test5();//测试友元函数、友元类
//
//
//	return 0;
//}


