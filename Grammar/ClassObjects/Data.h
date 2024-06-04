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

	//������Ԫ����
	friend ostream& operator<<(ostream& out, const Data& d);//���ܼ�const���Σ���Ϊ����û���õ�thisָ��
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
	//�������������ݳ�Ա������ʵ����ʱ�Ŷ��壬��Ҳ���������ó�ȱʡֵ
	//��һ����ڳ�ʼ���б��const�����á�û��Ĭ�Ϲ��캯�����Զ������� ������ڳ�ʼ���б���
	//��ʼ���б������ݳ�Ա�Ķ���
	int _year;
	int _month;
	int _day;

};

//����ȫ�ֺ���
ostream& operator<<(ostream& out, const Data& d);
istream& operator>>(istream& in, Data& d);

