#include "Vector.h"


//int main()
//{
//	//vector<int> v;
//	//size_t sz = v.capacity();
//	//v.reserve(100);//Ԥ��100��Ԫ�صĿռ�
//	
//	////�鿴vector�����ݻ���
//	//for (int i = 0; i < 100; i++){
//	//	v.push_back(i);
//	//	if (sz != v.capacity()) {
//	//		sz = v.capacity();
//	//		cout << sz << endl;
//	//	}
//	//}
//
//	////����resserve()��resize()
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
//	//����find
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


//��vector����push_back����0����Լ�������
//��һ��������ַ������ַ�����Ϊ������־������ END�����ַ���Ҫ���û�����һ���������ַ�����������

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
//			myvector.push_back(std::stoi(input)); // ���ַ���ת��Ϊ��������������
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


// vector ������ʧЧ����:�ǵ������ײ��Ӧָ����ָ��Ŀռ䱻�����ˣ���ʹ��һ���Ѿ����ͷŵĿռ�,��ɳ������
// ��������ײ�ռ�ı�Ĳ��������п����ǵ�����ʧЧ�����磺resize��reserve��insert��assign��push_back��
// �����ʽ�������ϲ������֮�������Ҫ����ͨ������������vector�е�Ԫ�أ�ֻ���it���¸�ֵ����

int main()
{
	//�������
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
	//v.assign(10, 9);//����ָ�����ݣ�10��9
	v.resize(10, 9);//��ЧԪ������10����С��10�����Ա�֮ǰ��Ԫ�ظ���������֮����9���
	it = v.begin();
	while (it != v.end())
	{
		cout << *it << " ";
		++it;
	}
	cout << endl;

	return 0;
}