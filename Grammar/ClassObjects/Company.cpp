//#define _CRT_SECURE_NO_WARNINGS 1
//#include<iostream>
//#include <cstring>
//#include <cstdlib>
//
//using namespace std;
//
//class Company
//{
//public:
//	Company();
//	Company(const char* name, int count);//const修饰，不可直接修改，需要调用自定义成员函数修改
//	void setName(const char* name);
//	void setCount(int count);
//	void show() const;
//	~Company();
//	Company(const Company& cp);
//
//private:
//	char* _name;
//	int _count;
//};
//
//
//Company::Company()//无参构造函数
//{
//	_name = nullptr;
//	_count = 0;
//}
//Company::Company(const char* name, int count)
//{
//	_name = new char[strlen(name) + 1];//在堆区申请内存空间
//	strcpy(_name, name);
//	_count = count;
//}
//void Company::setName(const char* name)
//{
//	if (_name)
//	{
//		delete[]_name;
//		_name = nullptr;
//	}
//	_name = new char[strlen(name) + 1];
//	strcpy(_name, name);
//}
//void Company::setCount(int count)
//{
//	_count = count;
//}
//void Company::show() const
//{
//	cout << "名称: " << _name << endl;
//	cout << "人数: " << _count << endl;
//}
//Company::~Company()
//{
//	if (_name)
//	{
//		delete[]_name;
//		_name = nullptr;
//	}
//	_count = 0;
//}
//Company::Company(const Company& cp)
//{
//	_name = new char[strlen(cp._name) + 1];
//	strcpy(_name, cp._name);
//	_count = cp._count;
//}
//
//
//static void Test1()//设计为静态函数，只在本翻译单元中访问，避免命名冲突
//{
//	Company cp1("Alibaba", 1000000);//字符串存在常量区
//	Company cp2(cp1);
//	cp2.setName("Tenxun");
//	cp1.show();
//	cp2.show();
//
//}
//
//int main()
//{
//	Test1();
//
//
//	return 0;
//}
