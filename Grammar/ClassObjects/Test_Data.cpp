#define _CRT_SECURE_NO_WARNINGS 1
#include "Data.h"



static void Test1()
{
	Data d1;
	Data d2;
	cin >> d1 >> d2;
	cout << d1 << d2;


}

static void Test2()
{
	Data d1(2024,12,31);
	Data d2(2024, 11, 1);
	Data d3(d1 + 1);
	d3.Print();
	d1 += 1;
	d1.Print();
	++d1;
	d1.Print();
	d2 -= 1;
	d2.Print();
	--d2;
	d2.Print();

	int ret = d2 - d1;
	cout << ret << endl;


	//cout << (d1.GetMonthDay(2024, 2)) << endl;


}


//int main()
//{
//	Test1();
//
//	//Test2();
//
//
//
//	return 0;
//}



