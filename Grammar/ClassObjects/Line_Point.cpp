#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <cassert>
#include <cmath>
using namespace std;

class Line;//����Line�࣬��Point������Ҫ����Line����ʱ

class Point
{
private:
	int _x;
	int _y;
	static int _z;
	friend Line;

public:
	//Point(){}//Point������Ĭ�Ϲ��캯��
	//Point(int x, int y) :_x(x), _y(y) {}//�������캯��
	Point(int x = 0, int y = 0) :_x(x), _y(y){}//ȱʡ���캯��
	Point(const Point& p);
	void print()const;
	void set_x(int x);
	void set_y(int y);

	static void put()//��̬��Ա����Ҫ�����ڶ���
	{
		cout << "z= " << _z << endl;//ֻ�ܷ��ʱ���ľ�̬���ݳ�Ա
	}

	void setfun(int x = 9, int y = 9);

	
	//��Ԫ֮��ͨ����
	//��Ԫ�����ڵ��������Է��������κ�λ��
	//������Ԫ�������������ⶨ�壬���岻��friend�����岻��ֱ�ӷ���˽�г�Ա��Ҫ��������
	friend Point add(const Point& a, const Point& b);

	//��Ԫ֮������ĳ�Ա����,��Ҫָ��Line������Ϊ����Line��ĳ�Ա����

	//Line��Point����Ԫ�࣬Line�ĳ�Ա�������ܷ���Point��˽�г�Ա
	
};

int Point::_z = 100;//��̬���ݳ�Ա�����ⶨ��,Ҫָ������


class Line
{
public:
	Line() = default;
	//Point����ĳ�ʼ������Line�๹�캯���ĳ�ʼ���б�
	Line(int x1, int y1, int x2, int y2) :_point1(x1, y1), _point2(x2, y2) {}
	Line(const Line& line);

	//Line��ĳ�Ա������ΪPoint�����Ԫ����

	
	double distan() const;//Line��Point����Ԫ�࣬Line�ĳ�Ա�������ܷ���Point��˽�г�Ա
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

Point add(const Point& a, const Point& b)//������Ԫ����������ָ�����򣬲���Point��ĳ�Ա����
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
	p1.put();//ͨ��������ʾ�̬��Ա����
	Point::put();//ͨ��ָ���������
}


void Test3()
{
	Point* pa = new Point[2]{ Point(5,5),Point(6,6) };//ָ������ָ��
	pa[0].print();
	pa[1].print();

	//�������飬���Զ������޲ι��캯���ʹ�Ĭ�ϲ������캯������Ҫʱ������ʽ����Ĭ�Ϲ��캯��
	Point arr[3] = { Point(1,1) ,Point(2,2) ,Point(3,3) };
	for (int i = 0; i < 3; i++)
	{
		arr[i].print();
	}

}

//��������
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
	Point* p5 = (Point*)malloc(sizeof(Point));//���㴴�����󣬴������������ù��캯����
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
	Point c = add(a, b);//������Ԫ����
	a.print();
	b.print();//1	1
	c.print();//2	2

	Line l1(1, 1, 2, 2);
	double s = l1.distan();//Line��Point����Ԫ��
	cout << "s =" << s << endl;
	
	l1.func_set_point(a, 10, 10);
	l1.func_print_point(a);

}


//int main()
//{
//	//Test1();//����������Ա
//
//	//Test2();//���Ծ�̬��Ա����
//
//	//Test3();//ָ������ָ�롢��������
//
//	//Test4();//�����ڴ��ͷ�
//
//	//Test5();//������Ԫ��������Ԫ��
//
//
//	return 0;
//}


