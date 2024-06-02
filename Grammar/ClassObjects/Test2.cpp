#define _CRT_SECURE_NO_WARNINGS 1
#include "ClassObjects.h"




///@Time    :

///@Problem : 
///                                                                           
///    1.成员变量在对象里，成员函数不在对象里，在代码段里，类的不同对象共用一份成员函数 
/// 
/// 2.创建对象指针后，若成员函数的函数体内访问了成员变量，那要确保对象指针不能为空指针
/// 
/// 3.                                                                       
/// 
///————————————————————————————————————————————————————————————————————————————  






void Test3()
{
    MyClass obj(5);
	MyClass* pa = new MyClass(2);
    obj.setValue(10);
    obj.increment().increment();  // 链式调用
    obj.showValue();
	pa->showValue();
	obj.staticFunction();

	delete pa;
	pa = nullptr;
}

void Test2()
{
	Rectangle r1;
	Rectangle r2(3, 4);
	r1.set(1, 2);
	cout << "r1.area=" << r1.area() << endl;
	cout << "r2.area=" << r2.area() << endl;
}

void Test1()
{
	Point1 p1;
	p1.Set(2, 2);
	p1.Show();
}


void Test4()
{
	Point a(2, 2);
	Point b(a);

	b.show();

	
	
	
}

int main()
{
	//Test1();//测试this指针

	//Test2();//测试构造函数

	//Test3();//测试析构函数、new	delete	动态申请空间与释放

	Test4();






	return 0;
}


