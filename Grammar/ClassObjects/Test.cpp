#define _CRT_SECURE_NO_WARNINGS 1

#include "ClassObjects.h"


///@Time    :

///@Problem : 内联函数
/// 
/// 函数体：内联函数必须在头文件或同一翻译单元中定义。
/// 内联函数可以在类定义内部实现，也可以在类定义外部实现。
/// 
/// 
/// 
///1、声明和定义分离
// 2、static,链接属性，只在当前文件可见
// 3、inline                                                                          
///         
///                                                                    
///————————————————————————————————————————————————————————————————————————————            
///@Codeing :
///                                                                           
///                                                                                                                                                        
///****************************************************************************          





                                                                       

///————————————————————————————————————————————————————————————————————————————  

class A
{
public:
    void fn()
    {
        cout << "fn()";
    }

};
void Test4()
{
    A a;
    A* b = &a;
    b->fn();
}

//auto关键字可以自动推导变量的类型,用于范围for循环
void Test3()
{
    cout << endl;
    int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
    for (int& e : arr) {
        cout << e << " ";
    }
    cout << endl;
}


void Test2()
{
    Circle cir;
    cir.setRadius(2.1);
    cir.showCircle();
}

void Test1()
{
    Point p;
    p.Set(1, 2);
    p.Show();

    Student s1;
    s1.SetInfor("zhangsan", 18, "nanjing", 99.0);
    s1.ShowInfor();


}


int main()
{
    //Test1();//测试类的声明与定义

    //Test2();//设计圆类

    //Test3();//测试auto

    Test4();//类与对象
  
    return 0;
}

