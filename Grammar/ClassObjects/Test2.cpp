#define _CRT_SECURE_NO_WARNINGS 1
#include "ClassObjects.h"




///@Time    :

///@Problem : 
///                                                                           
///    1.��Ա�����ڶ������Ա�������ڶ�����ڴ�������Ĳ�ͬ������һ�ݳ�Ա���� 
/// 
/// 2.��������ָ�������Ա�����ĺ������ڷ����˳�Ա��������Ҫȷ������ָ�벻��Ϊ��ָ��
/// 
/// 3.                                                                       
/// 
///��������������������������������������������������������������������������������������������������������������������������������������������������������  






void Test3()
{
    MyClass obj(5);
	MyClass* pa = new MyClass(2);
    obj.setValue(10);
    obj.increment().increment();  // ��ʽ����
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
	//Test1();//����thisָ��

	//Test2();//���Թ��캯��

	//Test3();//��������������new	delete	��̬����ռ����ͷ�

	Test4();






	return 0;
}


