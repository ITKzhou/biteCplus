#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <cassert>
using namespace std;

class Point
{
public:
	//Point(){}//Point������Ĭ�Ϲ��캯��
	//Point(int x, int y) :_x(x), _y(y) {}//�������캯��
	Point(int x = 0, int y = 0) :_x(x), _y(y){}//ȱʡ���캯��
	Point(const Point& p);
	void print()const;
	void set_x(int x);
	void set_y(int y);

	static void put()//Ҫ�����ڶ���
	{
		cout << "z= " << _z << endl;//ֻ�ܷ��ʱ���ľ�̬���ݳ�Ա
	}

	void setfun(int x = 9, int y = 9);

private:
	int _x;
	int _y;
	static int _z;
};

int Point::_z = 100;//��̬���ݳ�Ա�����ⶨ��,Ҫָ������


class Line
{
public:
	//Point����ĳ�ʼ������Line�๹�캯���ĳ�ʼ���б�
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

int main()
{
	//Test1();//����������Ա

	//Test2();//���Ծ�̬��Ա����

	//Test3();//ָ������ָ�롢��������

	Test4();//�����ڴ��ͷ�


	return 0;
}