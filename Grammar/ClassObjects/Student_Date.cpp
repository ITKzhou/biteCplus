#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <string>
using namespace std;


class Date
{
public:
	Date(int year = 1920, int month = 1, int day =1);
	Date(const Date& date);
	void setYear(int year); 
	void setMonth(int month); 
	void setDay(int day); 
	void print() const;

private:
	int _year;
	int _month;
	int _day;
};

class Student
{
public:
	Student();
	Student(string name,int age,Date& date);
	void printInfo();
private:
	string _name;
	int _age;
	Date _enroll;
};

Student::Student()
{
	_name.clear();
	_age = 0;
	_enroll.setYear(1999);
	_enroll.setMonth(9);
	_enroll.setDay(1);
}

Student::Student(string name, int age, Date& date):_enroll(date)//类对象成员初始化必须放在构造函数
{
	_name = name;
	_age = age;
}

void Student::printInfo()
{
	cout << _name << " " << _age << " ";
	_enroll.print();
}


Date::Date(int year, int month, int day)
{
	_year = year;
	_month = month;
	_day = day;
}

Date::Date(const Date& date)
{
	_year = date._year;
	_month = date._month;
	_day = date._day;
}


void Date::setYear(int year)
{
	_year = year;
}

void Date::setMonth(int month)
{
	_month = month;
}

void Date::setDay(int day)
{
	_day = day;
}

void Date::print() const
{
	cout << _year << "/" << _month << "/" << _day << endl;
}




//int main()
//{
//	Date day(2018, 9, 1);
//	Student stu1("zhangsan", 22, day);
//	stu1.printInfo();
//
//	return 0;
//}