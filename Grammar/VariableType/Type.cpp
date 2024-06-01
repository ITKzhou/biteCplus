#define _CRT_SECURE_NO_WARNINGS 1

#include "Type.h"

//// 全局域
//// 局部域
//// 命名空间域
//// 类域
//// 编译器搜索原则
//// 不指定域：1、当前局部域   2、全局域  
//// 指定域   3、如果指定了，直接去指定域搜索

int globalVar = 10;

int sharedVar = 1;//定义sharedVar ==1

int ADD(int a, int b)
{
	return a + b;
}

double ADD(double a, double b)
{
	return a + b;
}


