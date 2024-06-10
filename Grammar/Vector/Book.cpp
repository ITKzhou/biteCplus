#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
#include <deque>
#include <string>
#include <cassert>

using namespace std;



/// @Codeing  :  序列式容器
///                                                                           
///    vexto与迭代器配合使用                                                                                                                                                   
///****************************************************************************          

//int main()
//{
//  //使用列表方式初始化，C++11新语法
//	vector<int> v{ 1, 2, 3, 4 };
//
//	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
//	char src[11] = { "abcdefghij" };
//	vector<int> vecInt(arr, arr + 10);//使用迭代器进行初始化构造
//	vector<int>::iterator itv;//声明正向遍历迭代器
//	vector<int>::reverse_iterator ritv;//声明逆向遍历迭代器
//
//	deque<char> deqStr(src, src + 10);
//	deque<char>::iterator itd = deqStr.end();
//
//	list<float> listFlo(10,3);
//	list<float>::iterator itl = listFlo.begin();
//
//	//迭代器正向遍历
//	for (itv = vecInt.begin(); itv != vecInt.end(); ++itv) {
//		cout << *itv << " ";
//	}
//	cout << endl;
//
//	//范围for循环遍历
//	for (auto i : vecInt) {
//		cout << i << " ";
//	}
//	cout << endl;
//
//	//下标[]遍历
//	for (int i = 0; i < vecInt.size(); i++){
//		cout << vecInt[i] << " ";
//	}
//	cout << endl;
//
//	//成员函数at()遍历
//	for (int i = 0; i < vecInt.size(); i++) {
//		cout << vecInt.at(i) << " ";
//	}
//	cout << endl;
//
//	//迭代器逆向遍历
//	for (ritv = vecInt.rbegin(); ritv != vecInt.rend(); ++ritv) {
//		cout << *ritv << " ";
//	}
//	cout << endl;
//
//	////迭代器遍历deque类型的对象
//	while (itd != deqStr.begin()) {
//		--itd;// itd = deqStr.end()，指向的是deqStr对象最后一个元素的下一个元素，即'\0'的下标，所以先减再解引用
//		cout << *itd << " ";
//	}
//	cout << endl;
//
//	////list类型的对象不能用下标[]遍历，因此用迭代器遍历
//	while (itl != listFlo.end()) {
//		cout << *itl << " ";
//		++itl;
//	}
//	cout << endl;
//
//	return 0;
//}





