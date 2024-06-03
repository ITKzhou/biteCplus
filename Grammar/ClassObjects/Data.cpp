#define _CRT_SECURE_NO_WARNINGS 1
#include "Data.h"



void Time::show() const
{
	cout << _hour << ":" << _minute << ":" << _second << endl;
}


Data::Data(int year, int month, int day)
{
	_year = year;
	_month = month;
	_day = day;
}

void Data::Print() const
{
	cout << _year << "-" << _month << "-" << _day << endl;
}

bool Data::operator<(const Data& d)
{
	if (_year < d._year)
	{
		return true;
	}
	else if (_year == d._year)
	{
		if (_month < d._month)
		{
			return true;
		}
		else if (_month == d._month) {
				return _day < d._day;
		}
	}
	return false;
}

bool Data::operator<=(const Data& d)
{
	return (*this < d) || (*this == d);
}
bool Data::operator>(const Data& d)
{
	return !(*this <= d);
}
bool Data::operator>=(const Data& d)
{
	return !(*this < d);
}
bool Data::operator==(const Data& d)
{
	return _year == d._year
		&& _month == d._month
		&& _day == d._day;
}
bool Data::operator!=(const Data& d)
{
	return !(*this == d);
}

//Data + day
Data& Data::operator+=(int day)
{
	_day += day;
	if (_day > GetMonthDay(_year, _month))
	{
		_day -= GetMonthDay(_year, _month);
		++_month;
		if (_month == 13)
		{
			++_year;
			_month = 1;
		}
	}
	return *this;
}
Data Data::operator+(int day)
{
	Data tmp = *this;
	tmp += day;
	return tmp;
}
Data& Data::operator-=(int day)
{
	_day -= day;
	if (_day <= 0)
	{
		_day += GetMonthDay(_year, _month);
		--_month;
		if (_month == 0)
		{
			--_year;
			_month = 12;
		}
	}
	return *this;
}
Data Data::operator-(int day)
{
	Data tmp = *this;
	tmp -= day;
	return tmp;
}


Data& Data::operator++()
{
	*this += 1;
	return *this;
}
Data Data::operator++(int)
{
	Data tmp = *this;
	*this += 1;
	return tmp;
}
Data& Data::operator--()
{
	*this -= 1;
	return *this;
}
Data Data::operator--(int)
{
	Data tmp = *this;
	*this -= 1;
	return tmp;
}

int Data::operator-(const Data& d) 
{
	int flag = 1;
	Data max = *this;
	Data min = d;
	if (*this < d)//假设法分出大小值
	{
		flag = -1;
		max = d;
		min = *this;
	}
	int n = 0;
	while (min != max)//小的数一直加到大数，中间加的数就是两日期之差
	{
		++min;
		++n;
	}
	return n * flag;
}




