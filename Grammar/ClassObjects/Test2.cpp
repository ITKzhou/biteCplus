//#define _CRT_SECURE_NO_WARNINGS 1
//#include "ClassObjects.h"
//
//
//
//
/////@Time    :
//
/////@Problem : 
/////                                                                           
/////    1.��Ա�����ڶ������Ա�������ڶ�����ڴ�������Ĳ�ͬ������һ�ݳ�Ա���� 
///// 
///// 2.��������ָ�������Ա�����ĺ������ڷ����˳�Ա��������Ҫȷ������ָ�벻��Ϊ��ָ��
///// 
///// 3.                                                                       
///// 
/////��������������������������������������������������������������������������������������������������������������������������������������������������������  
//
//
//
//
//
//
//void Test3()
//{
//    MyClass obj(5);
//	MyClass* pa = new MyClass(2);
//    obj.setValue(10);
//    obj.increment().increment();  // ��ʽ����
//    obj.showValue();
//	pa->showValue();
//	obj.staticFunction();
//
//	delete pa;
//	pa = nullptr;
//}
//
//void Test2()
//{
//	Rectangle r1;
//	Rectangle r2(3, 4);
//	r1.set(1, 2);
//	cout << "r1.area=" << r1.area() << endl;
//	cout << "r2.area=" << r2.area() << endl;
//}
//
//void Test1()
//{
//	Point1 p1;
//	p1.Set(2, 2);
//	p1.Show();
//}
//
//
//void Test4()
//{
//	Point a(2, 2);
//	Point b(a);
//
//	b.show();
//
//}
//
//void Test5()
//{
//	Data1 d1;
//	Data1 d2(2024, 06, 02);
//	Data1 d3(d2);
//
//	d1.show();
//	d2.show();
//	d3.show();
//
//
//}
//
//static	class Data
//{
//public:
//	Data() = default;// ��ʽ����Ĭ�Ϲ��캯��
//	//Data() = delete; // ����Ĭ�Ϲ��캯��
//
//	Data(int year, int month, int day)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//
//	Data(const Data& other)//�������캯��
//	{
//		_year = other._year;
//		_month = other._month;
//		_day = other._day;
//	}
//
//	Data(const Data&& other) noexcept//�ƶ����캯��
//	{
//		_year = other._year;
//		_month = other._month;
//		_day = other._day;
//	}
//
//	~Data()
//	{
//		cout << "this" << endl;
//		cout << "~Data" << endl;
//	}
//
//	void show()
//	{
//		cout << _year << "-" << _month << "-" << _day << endl;
//	}
//
//private:
//	int _year, _month, _day;
//};
//
//
//static void print(const string& str) {
//	cout << str << endl;
//}
//
//void Test6()
//{
//	string text = "Hello, World!";
//	print(text);  // ���⿽�������Ч��
//}
//
//
////int main()
////{
////	//Test1();//����thisָ��
////
////	//Test2();//���Թ��캯��
////
////	//Test3();//��������������new	delete	��̬����ռ����ͷ�
////
////	//Test4();//���Կ������캯��
////
////	//Test5();//����Data��Ĺ��캯��
////
////	Test6();
////
////
////	return 0;
////}
//
//
