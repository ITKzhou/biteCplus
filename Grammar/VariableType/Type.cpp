#define _CRT_SECURE_NO_WARNINGS 1

#include "Type.h"

//// ȫ����
//// �ֲ���
//// �����ռ���
//// ����
//// ����������ԭ��
//// ��ָ����1����ǰ�ֲ���   2��ȫ����  
//// ָ����   3�����ָ���ˣ�ֱ��ȥָ��������

int globalVar = 10;

int sharedVar = 1;//����sharedVar ==1

int ADD(int a, int b)
{
	return a + b;
}

double ADD(double a, double b)
{
	return a + b;
}


