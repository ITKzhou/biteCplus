#pragma once

#include <iostream>
#include <iomanip>
#include <string>
#include <assert.h>
#include <stdio.h>
using namespace std;


extern int sharedVar; // 声明变量


//缺省参数只能在声明的时候给默认值
int ADD(int a, int b = 9);

double ADD(double a, double b = 1.0);
