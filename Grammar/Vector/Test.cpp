#include "Vector.h"


//int main()
//{
//	//vector<int> v;
//	//size_t sz = v.capacity();
//	//v.reserve(100);//预定100个元素的空间
//	
//	////查看vector的扩容机制
//	//for (int i = 0; i < 100; i++){
//	//	v.push_back(i);
//	//	if (sz != v.capacity()) {
//	//		sz = v.capacity();
//	//		cout << sz << endl;
//	//	}
//	//}
//
//	////测试resserve()与resize()
//	//cout << v.size() << endl;
//	//cout << v.capacity() << endl;
//	//v.reserve(110);
//	//cout << v.size() << endl;
//	//cout << v.capacity() << endl;
//
//	//cout << "-----------------" << endl;
//
//	//cout << v.size() << endl;
//	//cout << v.capacity() << endl;
//	//v.resize(10);
//	//cout << v.size() << endl;
//	//cout << v.capacity() << endl;
//
//
//	//测试find
//	//int a[5] = { 1,2,3,4,5 };
//	//vector<int> v(a, a + 5);
//	//auto pos = find(v.begin(), v.end(), 3);
//	//if (pos != v.end()) {
//	//	v.insert(pos, 30);
//	//}
//	//for (auto e : v) {
//	//	cout << e << " ";
//	//}
//	//cout << endl;
//
//
//
//
//
//
//	return 0;
//}


//往vector数组push_back插入0后可以继续插入
//用一个特殊的字符或者字符串作为结束标志，例如 END。这种方法要求用户输入一个非数字字符来结束输入

//#include <iostream>
//#include <vector>
//#include <string>
//
//int main() {
//	std::vector<int> myvector;
//	std::string input;
//
//	std::cout << "Please enter some integers (enter 'END' to end):\n";
//
//	while (true) {
//		std::cin >> input;
//		if (input == "END") {
//			break;
//		}
//		try {
//			myvector.push_back(std::stoi(input)); // 将字符串转换为整数并插入向量
//		}
//		catch (const std::invalid_argument&) {
//			std::cout << "Invalid input. Please enter an integer or 'END' to finish.\n";
//		}
//	}
//
//	std::cout << "myvector stores " << myvector.size() << " numbers:\n";
//	for (int num : myvector) {
//		std::cout << num << " ";
//	}
//	std::cout << std::endl;
//
//	return 0;
//}


// vector 迭代器失效问题:是迭代器底层对应指针所指向的空间被销毁了，而使用一块已经被释放的空间,造成程序崩溃
// 会引起其底层空间改变的操作，都有可能是迭代器失效，比如：resize、reserve、insert、assign、push_back等
// 解决方式：在以上操作完成之后，如果想要继续通过迭代器操作vector中的元素，只需给it重新赋值即可

int main()
{
	//程序崩溃
	//vector<int> v{ 1,2,3,4,5,6 };
	//auto it = v.begin();
	//v.assign(10, 8);
	//while (it != v.end())
	//{
	//	cout << *it << " ";
	//	++it;
	//}
	//cout << endl;

	vector<int> v{ 1,2,3,4,5,6 };
	auto it = v.begin();
	//v.assign(10, 9);//重新指定内容：10个9
	v.resize(10, 9);//有效元素扩大到10（缩小到10），对比之前的元素个数，个数之差用9填充
	it = v.begin();
	while (it != v.end())
	{
		cout << *it << " ";
		++it;
	}
	cout << endl;

	return 0;
}