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
	Data(const Data& other);//显式声明定义拷贝构造函数
	Data(Data&& other) noexcept;//移动构造函数
	~Data(){}
	void Print()const;
	bool operator<(Data& d);
	bool operator<=(Data& d);
	bool operator>(Data& d);
	bool operator>=(Data& d);
	bool operator==(Data& d);
	bool operator!=(Data& d);

	Data& operator+=(int day);
	Data operator+(int day);
	Data& operator-=(int day);
	Data operator-(int day);



	int GetMonthDay(int _year, int _month)
	{
		assert(_month > 0 && _month < 13);
		static int month[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
		if (_month == 2 && (_year % 4 == 0) && (_year % 100 != 0) || (_year % 400 == 0))
		{
			return 29;
		}
		return month[_month];
	}
	

private:
	int _year;//声明就初始化
	int _month;
	int _day;

};

