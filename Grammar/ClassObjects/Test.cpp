//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include "ClassObjects.h"
//
//
/////@Time    :
//
/////@Problem : ��������
///// 
///// �����壺��������������ͷ�ļ���ͬһ���뵥Ԫ�ж��塣
///// ���������������ඨ���ڲ�ʵ�֣�Ҳ�������ඨ���ⲿʵ�֡�
///// 
///// 
///// 
/////1�������Ͷ������
//// 2��static,�������ԣ�ֻ�ڵ�ǰ�ļ��ɼ�
//// 3��inline                                                                          
/////         
/////                                                                    
/////��������������������������������������������������������������������������������������������������������������������������������������������������������            
/////@Codeing :
/////                                                                           
/////                                                                                                                                                        
/////****************************************************************************          
//
//
//
//
//
//                                                                       
//
/////��������������������������������������������������������������������������������������������������������������������������������������������������������  
//
//class A
//{
//public:
//    void fn()
//    {
//        cout << "fn()";
//    }
//
//};
//void Test4()
//{
//    A a;
//    A* b = &a;
//    b->fn();
//}
//
////auto�ؼ��ֿ����Զ��Ƶ�����������,���ڷ�Χforѭ��
//void Test3()
//{
//    cout << endl;
//    int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//    for (int& e : arr) {
//        cout << e << " ";
//    }
//    cout << endl;
//}
//
//
//void Test2()
//{
//    Circle cir;
//    cir.setRadius(2.1);
//    cir.showCircle();
//}
//
//void Test1()
//{
//    Point p;
//    p.Set(1, 2);
//    p.Show();
//
//    Student s1;
//    s1.SetInfor("zhangsan", 18, "nanjing", 99.0);
//    s1.ShowInfor();
//
//
//}
//bool isLitt() {
//    unsigned int a = 0x1;
//    char* pa = (char*)&a;
//    return pa[0] == 0x1;
//}
//void Test5()
//{
//    if (isLitt()) {
//        cout << "С��" << endl;
//    }
//    else
//        cout << "���" << endl;
//}
//
//void Test6()
//{
//	struct MyStruct {
//		char a;
//		int b;
//		char c;
//	};
//
//	cout << "Size of MyStruct: " << sizeof(MyStruct) << endl;
//	cout << "Alignment of MyStruct: " << alignof(MyStruct) << endl;
//	cout << "Offset of a: " << offsetof(MyStruct, a) << endl;
//	cout << "Offset of b: " << offsetof(MyStruct, b) << endl;
//	cout << "Offset of c: " << offsetof(MyStruct, c) << endl;
//}
// 
// 
//
//int main()
//{
//    //Test1();//������������붨��
//
//    //Test2();//���Բ��
//
//    //Test3();//����auto
//
//    //Test4();//�������
//
//    Test5();//�ж���С�˴洢
// 
//	  Test6();//���Լ���ṹ���Ա�����Ĵ�С
//  
//    return 0;
//}
//




