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
//	Company(const char* name, int count);//const���Σ�����ֱ���޸ģ���Ҫ�����Զ����Ա�����޸�
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
//Company::Company()//�޲ι��캯��
//{
//	_name = nullptr;
//	_count = 0;
//}
//Company::Company(const char* name, int count)
//{
//	_name = new char[strlen(name) + 1];//�ڶ��������ڴ�ռ�
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
//	cout << "����: " << _name << endl;
//	cout << "����: " << _count << endl;
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
//static void Test1()//���Ϊ��̬������ֻ�ڱ����뵥Ԫ�з��ʣ�����������ͻ
//{
//	Company cp1("Alibaba", 1000000);//�ַ������ڳ�����
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
