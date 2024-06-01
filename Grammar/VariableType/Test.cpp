#define _CRT_SECURE_NO_WARNINGS 1
#include "Type.h"



///@Time    :

///@Problem : 
///   
/// (::)域作用限定符		全局域	局部域	命名空间域	类域
/// 不指定域：1、当前局部域   2、全局域  
/// 指定域   3、如果指定了，直接去指定域搜索
/// 
/// 
/// 缺省参数：是指形参设置默认的值，全缺省(形参都设有默认值)，半缺省(形参从右往左连续给默认值)
/// 调用函数时，某实参不写，则形参就一定要设有缺省参数
/// 
///                                                                        
///                                                                            
///————————————————————————————————————————————————————————————————————————————            
///@Codeing :
///                                                                           
///                                                                                                                                                        
///****************************************************************************          
//
//int x = 11;
//
//void Test1()
//{
//	int a, b;
//	double c, d;
//	cout << "请输入:>";
//	cin >> a >> b >> c >> d;
//	printf("ADD(int a, int b = 9):>");
//	cout << ADD(a) << endl;
//
//	printf("ADD(double a, double b = 1.0):>");//函数重载
//	cout << ADD(c) << endl;
//
//	int x = 33;
//	printf("%d\n", ::x);//作用域解析符，访问全局变量
//	printf("%d\n", x);
//}
//
//int main()
//{
//	Test1();
//
//	return 0;
//}


///————————————————————————————————————————————————————————————————————————————  


/// @Codeing  :  
///                                                                           
//                                                                                                                                                
///****************************************************************************          

//void Test1()
//{
//	int a = 1;
//	int& b = a;
//	cout << "&a=" << &a << endl;
//	cout << "&b=" << &b << endl;//引用是指向对象的别名
//	++a;
//	cout << a << endl;
//	cout << b << endl;
//	++b;
//	cout << a << endl;
//	cout << b << endl;
//}
////1、引用作参数，Swap
//void Swap(int& a, int& b) {
//	int tmp = a;
//	a = b;
//	b = tmp;
//}
//void Test2()
//{
//	int a = 5, b = 9;
//	cout << "a=" << a << endl;
//	cout << "b=" << b << endl;
//	Swap(a, b);
//	cout << "a=" << a << endl;
//	cout << "b=" << b << endl;
//}
////当参数是结构体指针时
//typedef struct Student {
//	int age;
//	char name[20];
//	struct Student* patner;
//}Stu, * Stupr;
//
//void playGames(Stupr& p)//结构体指针引用
//{
//	//...
//}
//
////2、做返回值(a、修改返回对象 b、减少拷贝提高效率)，
////作返回值时，
//
//
//int main()
//{
//	//Test1();
//
//	Test2();
//
//	return 0;
//}



///————————————————————————————————————————————————————————————————————————————  





///@Time    :

///@Problem : c++重写顺序表
///                                                                           
///           //引用在函数参数传递、
///				返回值优化、
///				运算符重载
//                                                                    
///————————————————————————————————————————————————————————————————————————————            
///@Codeing :
///    
/// 
/// 
/// 引用作返回值时：
///		引用变量指向的对象必须是全部变量、静态变量、堆上的变量                                                                   
///      注意生命周期：返回的引用必须保证所引用对象在函数外仍然存在 
/// 
///                                                                                                                                                
///****************************************************************************          


//void print(const int& r) {//常量引用作为函数参数
//	std::cout << r << std::endl;
//}
//
//int& getElement(int* array, int index) {
//	return array[index];
//}
//
//void Test2()
//{
//	int a = 10;
//	print(a); // 输出 10
//
//	int arr[3] = { 1, 2, 3 };
//	getElement(arr, 1) = 10; // 修改 arr[1] 为 10
//}
//
//
//void Test1()
//{
//	SeqList s;
//	s.Init();
//
//	s.PushBack(1);
//	s.PushBack(2);
//	s.PushBack(3);
//	s.PushBack(4);
//
//	for (int i = 0; i < s.size; i++)
//	{
//		if (s[i] % 2 == 0) {//运算符重载,对对象内部数据的直接访问和修改
//			s[i] *= 2; 
//		}
//		cout << s[i] << " ";
//	}
//	cout << endl;
//	s.Destroy();
//
//}
//
//
//int main()
//{
//	Test1();//运算符重载
//	Test2();//引用作函数参数、返回值
//	return 0;
//}


///  时间复杂度： O()                                                            
///  空间复杂度： O()                                                                        

///————————————————————————————————————————————————————————————————————————————  



///@Time    :

///@Problem : 
///                                                                           
///        带参数的宏与内联函数                                                                    
///————————————————————————————————————————————————————————————————————————————            
///@Codeing :
///      内联函数是通过在函数定义前加上 inline 关键字来声明的。
/// 内联函数的目的是在编译时将函数调用替换为函数体代码，从而避免函数调用的开销。 
/// 
/// 宏函数在预处理阶段进行替换，而不是在编译时或运行时。它们没有类型检查，也不是真正的函数。                                                                    
///                                                                                                                                                        
///****************************************************************************      
    
//#define SQUARE(x) ((x) * (x))
//inline int square(int x) {
//	return x * x;
//}
//
//int main() {
//	int result1 = SQUARE(5 + 1);// 替换为 ((5 + 1) * (5 + 1))，结果正确但存在潜在风险
//	int result2 = square(5 + 1); // 确保按预期进行计算
//	cout << result1 << endl;
//	cout << result2 << endl;
//	return 0;
//}


///————————————————————————————————————————————————————————————————————————————  

//

///@Time    :

///@Problem : 
///         命名空间的使用
/// 
/// cout 的格式输出 dec(十进制)、hex,oct
/// setw(int)设置宽度		                                                                  
///                                                                            
///————————————————————————————————————————————————————————————————————————————            
///@Codeing :
/// 
/// cin >>
/// cin.get
/// cin.getline
/// 
///      cin.fail(): 检测流是否进入错误状态。
///		cin.eof() : 检测是否到达输入的末尾。
///		cin.clear() : 清除错误状态标志，使流恢复到有效状态。
///                                                                                                                                                        
///****************************************************************************   


//void Test6()
//{
//	int* a; 
//	a = (int*)malloc(sizeof(int));//动态申请一块整形大小的空间
//	assert(a);
//	*a = 1;
//	cout << *a << endl;
//	free(a);
//	a = nullptr;
//
//	a = new int;
//	*a = 10;
//	cout << *a << endl;
//	delete a;
//	a = nullptr;
//
//	int* pr = new int[3];//动态申请一块连续的整形大小空间
//
//	*pr = 123;
//	*(pr + 1) = 456;
//	*(pr + 2) = 789;
//	for (int i = 0; i < 3; i++)
//	{
//		cout << pr[i] << " ";
//	}
//	cout << endl;
//	delete[]pr;
//	pr = nullptr;
//
//}
//
//
//int &fn(int& a) {//引用变量作形参、返回值
//	return a = 10;
//}
//
////有引用变量、引用对象，没有引用类，类没有具体的内存地址
//void Test5()
//{
//	int a = 1;
//	float b = 1.34;
//	int c = int(b);//c++中的强制类型转换
//	const int& d = a;
//	//b = 2;//报错	const修饰不可修改变量的值
//	cout << a << endl;
//	cout << b << endl;
//	cout << c << endl;
//	cout << d << endl;
//
//	int& n = fn(a);
//	cout << n << endl;
//
//
//}
//
//
//
////使用extern关键字可以声明一个变量或（函数）在别的文件中定义，并且在当前文件中使用该变量或（函数）
//extern int globalVar;
//void Test4()
//{
//	int age(18);//利用构造函数对变量进行初始化
//	string str;
//	getline(cin, str);//读取缓冲区的内容到str中，忽略缓冲区的第一个换行符
//	cout << "your input:>" << str << endl;
//	cout << globalVar << endl;
//
//	globalVar = 100;
//	cout << globalVar << endl;
//	//在多文件编程中，通常会在头文件中声明变量或函数，并在源文件中定义。
//	sharedVar = 2;//修改为2
//
//	cout << sharedVar << endl;
//
//}
//
//
//
////void Test3() 
////{
////	int number;
////	while (true) {
////		cout << "Enter a number: ";
////		cin >> number;
////
////		if (!cin.fail()) {
////			cout << "You entered: " << number << endl;
////			break;
////		}
////		else {
////			cout << "Invalid input. Try again." << endl;
////			cin.clear(); // 清除错误状态
////			cin.ignore(numeric_limits<streamsize>::max(), '\n'); // 丢弃错误输入
////		}
////	}
////}
//
//
//void Test2()
//{
//	int a;
//	float b;
//	string s1;
//	cin >> a >> b >> s1;
//	cout << "a=" << a << endl;
//	cout << "b=" << b << endl;
//	cout << "s1=" << s1 << endl;
//	string s2;
//	while (cin >> s2) {//连续输入，ctrl+z 结束
//		if (s2 == "exit") {
//			break;
//		}
//		cout << s2 << " ";
//	}
//	cout << endl;
//}
//
//namespace peoper {
//	int age = 20;
//	char* name[20];
//	typedef unsigned int uint;
//}
//int age = 18;
//void Test1()
//{
//	int age = 8;
//	cout << oct << age << endl;
//	cout << ::age << endl;
//	cout << hex << peoper::age << endl;
//}
//
//int main()
//{
//	//Test1();//测试命名空间
//
//	//Test2();//测试cin
//
//	//Test3();//cin的输入检查
//
//	//Test4();//测试extern
//	
//	//Test5();//
//
//	Test6();
//
//	return 0;
//}
                                                                     

///————————————————————————————————————————————————————————————————————————————  









