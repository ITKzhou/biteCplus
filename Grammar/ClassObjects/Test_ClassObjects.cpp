#define _CRT_SECURE_NO_WARNINGS 1

#include "ClassObjects.h"


//auto�ؼ��ֿ����Զ��Ƶ�����������,���ڷ�Χforѭ��
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
        cout << "С��" << endl;
    }
    else
        cout << "���" << endl;
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

	//newʧ�����Ժ����쳣������Ҫ�ֶ����
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
//    //Test1();//��Χforѭ��
//
//    //Test2();//�ж���С�˴洢
// 
//	//Test3();//����ṹ���Ա�����Ĵ�С
//
//	Test4();//new��delete����������
//  
//    return 0;
//}

int main() {
    int year, days;
    while (cin >> year >> days) { // ע�� while ������ case
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



