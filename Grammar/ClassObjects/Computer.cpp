//#define _CRT_SECURE_NO_WARNINGS 1
//#include<iostream>
//#include <cstring>
//#include <cstdlib>
//
//using namespace std;
//
//class Computer
//{
//public:
//	Computer(const char* brand = "Hasee", double price = 6000);
//	Computer(const Computer& pc);//拷贝构造函数
//	~Computer();
//	void show();
//
//private:
//	char* _brand;//数据成员有指针
//	double _price;
//};
//
//
//Computer::Computer(const char* brand, double price)
//{
//	_brand = new char[strlen(brand) + 1];
//	strcpy(_brand, brand);
//	_price = price;
//}
//
//Computer::Computer(const Computer& pc)
//{
//	_brand = new char[strlen(pc._brand) + 1];
//	strcpy(_brand, pc._brand);
//	_price = pc._price;
//}
//
//Computer::~Computer()
//{
//	delete[]_brand;
//	_brand = nullptr;
//}
//
//void Computer::show()
//{
//	cout << _brand << " : " << _price << endl;
//}
//
//
//
//
//static void Test1()
//{
//	Computer pc1;
//	pc1.show();
//	Computer pc2("Dell", 7000);
//	pc2.show();
//	Computer pc3(pc1);//测试拷贝构造函数
//	pc3.show();
//}
//
//int main()
//{
//	Test1();
//
//
//	return 0;
//}
//
