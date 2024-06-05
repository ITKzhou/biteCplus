#define _CRT_SECURE_NO_WARNINGS 1

#include "ClassObjects.h"


//auto关键字可以自动推导变量的类型,用于范围for循环
static void Test1()
{
    cout << endl;
    int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
    for (int& e : arr) {
        cout << e << " ";
    }
    cout << endl;
}


bool isLitt() {
    unsigned int a = 0x1;
    char* pa = (char*)&a;
    return pa[0] == 0x1;
}
static void Test2()
{
    if (isLitt()) {
        cout << "小端" << endl;
    }
    else
        cout << "大端" << endl;
}


static void Test3()
{
	struct MyStruct {
		char a;
		int b;
		char c;
	};

	cout << "Size of MyStruct: " << sizeof(MyStruct) << endl;
	cout << "Alignment of MyStruct: " << alignof(MyStruct) << endl;
	cout << "Offset of a: " << offsetof(MyStruct, a) << endl;
	cout << "Offset of b: " << offsetof(MyStruct, b) << endl;
	cout << "Offset of c: " << offsetof(MyStruct, c) << endl;
}
 
static void Test4()
{
	ListNode* n1 = CreateList(5);

	//new失败了以后抛异常，不需要手动检查
	try
	{
		//func();
	}
	catch (const exception& e)
	{
		cout << e.what() << endl;
	}
}

//int main()
//{
//    //Test1();//范围for循环
//
//    //Test2();//判断是小端存储
// 
//	//Test3();//计算结构体成员变量的大小
//
//	Test4();//new与delete、创建链表
//  
//    return 0;
//}

int main() {
    int year, days;
    while (cin >> year >> days) { // 注意 while 处理多个 case
        int month[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
        if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0)) {
            month[2] = 29;
        }
        for (int i = 1; i < 13; ++i)
        {
            if (days <= month[i])
            {
                printf("%04d-%02d-%02d\n", year, i, days);
                break;
            }
            else
            {
                days -= month[i];
            }
        }
    }
}



