#define _CRT_SECURE_NO_WARNINGS 1
#include "Data.h"



static void Test1()
{
	Data d1(2011);
	Data d2(2024,06,03);
	Data d3(d1);
	Data d4 = move(d2);

}

static void Test2()
{
	Data d1(2024,12,31);
	Data d2(2024, 1, 1);
	cout << (d1.GetMonthDay(2024, 2)) << endl;
	d1 += 1;
	d1.Print();
	d2 -= 1;
	d2.Print();
}


int main()
{
	//Test1();

	Test2();//²âÊÔÔËËã·ûÖØÔØ



	return 0;
}



