#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <cassert>
using namespace std;

class Point
{
public:
	//Point(){}//Point类对象的默认构造函数
	//Point(int x, int y) :_x(x), _y(y) {}//参数构造函数
	Point(int x = 0, int y = 0) :_x(x), _y(y){}//缺省构造函数
	Point(const Point& p);
	void print()const;
	void set_x(int x);
	void set_y(int y);

	static void put()//要在类内定义
	{
		cout << "z= " << _z << endl;//只能访问本类的静态数据成员
	}

	void setfun(int x = 9, int y = 9);

private:
	int _x;
	int _y;
	static int _z;
};

int Point::_z = 100;//静态数据成员在类外定义,要指定类域


class Line
{
public:
	//Point对象的初始化放在Line类构造函数的初始化列表
	Line(int x1,int y1,int x2,int y2) :_point1(x1, y1), _point2(x2, y2){}
	Line(const Line& line);

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

int main()
{
	//Test1();//测试类对象成员

	//Test2();//测试静态成员函数

	//Test3();//指向对象的指针、对象数组

	Test4();//测试内存释放


	return 0;
}