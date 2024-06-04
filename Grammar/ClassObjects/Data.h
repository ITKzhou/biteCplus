#pragma once
#include<iostream>
#include <cstring>
#include <cstdlib>
#include <cassert>
#include <cmath>
using namespace std;


class Time
{
public:
	Time(){}
	~Time(){}
	void show() const;

private:
	int _hour = 0;
	int _minute = 0;
	int _second = 0;
};

class Data
{
public:
	Data(int year = 1970, int month = 1, int day = 1);

	void Print()const;
	bool isInvalidData();
	bool operator<(const Data& d)const;
	bool operator<=(const Data& d)const;
	bool operator>(const Data& d)const;
	bool operator>=(const Data& d)const;
	bool operator==(const Data& d)const;
	bool operator!=(const Data& d)const;

	Data& operator+=(int day);
	Data operator+(int day)const;
	Data& operator-=(int day);
	Data operator-(int day)const;

	Data& operator++();//++d
	Data operator++(int);//d++
	Data& operator--();
	Data operator--(int);

	//data - data
	int operator-(const Data& d)const;

	//声明友元函数
	friend ostream& operator<<(ostream& out, const Data& d);//不能加const修饰，因为函数没有用到this指针
	friend istream& operator>>(istream& in,Data& d);

	int GetMonthDay(int _year, int _month)const
	{
		assert(_month > 0 && _month < 13);
		static int month[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
		if (_month == 2 && ((_year % 4 == 0) && (_year % 100 != 0)) || (_year % 400 == 0))
		{
			return 29;
		}
		return month[_month];
	}
	
private:
	//这里是声明数据成员，对象实例化时才定义，但也可以在设置成缺省值
	//但一般放在初始化列表里，const、引用、没有默认构造函数的自定义类型 必须放在初始化列表里
	//初始化列表是数据成员的定义
	int _year;
	int _month;
	int _day;

};

//声明全局函数
ostream& operator<<(ostream& out, const Data& d);
istream& operator>>(istream& in, Data& d);

