#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
#include <deque>
#include <string>
#include <cassert>

using namespace std;



/// @Codeing  :  ����ʽ����
///                                                                           
///    vexto����������ʹ��                                                                                                                                                   
///****************************************************************************          

//int main()
//{
//  //ʹ���б�ʽ��ʼ����C++11���﷨
//	vector<int> v{ 1, 2, 3, 4 };
//
//	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
//	char src[11] = { "abcdefghij" };
//	vector<int> vecInt(arr, arr + 10);//ʹ�õ��������г�ʼ������
//	vector<int>::iterator itv;//�����������������
//	vector<int>::reverse_iterator ritv;//�����������������
//
//	deque<char> deqStr(src, src + 10);
//	deque<char>::iterator itd = deqStr.end();
//
//	list<float> listFlo(10,3);
//	list<float>::iterator itl = listFlo.begin();
//
//	//�������������
//	for (itv = vecInt.begin(); itv != vecInt.end(); ++itv) {
//		cout << *itv << " ";
//	}
//	cout << endl;
//
//	//��Χforѭ������
//	for (auto i : vecInt) {
//		cout << i << " ";
//	}
//	cout << endl;
//
//	//�±�[]����
//	for (int i = 0; i < vecInt.size(); i++){
//		cout << vecInt[i] << " ";
//	}
//	cout << endl;
//
//	//��Ա����at()����
//	for (int i = 0; i < vecInt.size(); i++) {
//		cout << vecInt.at(i) << " ";
//	}
//	cout << endl;
//
//	//�������������
//	for (ritv = vecInt.rbegin(); ritv != vecInt.rend(); ++ritv) {
//		cout << *ritv << " ";
//	}
//	cout << endl;
//
//	////����������deque���͵Ķ���
//	while (itd != deqStr.begin()) {
//		--itd;// itd = deqStr.end()��ָ�����deqStr�������һ��Ԫ�ص���һ��Ԫ�أ���'\0'���±꣬�����ȼ��ٽ�����
//		cout << *itd << " ";
//	}
//	cout << endl;
//
//	////list���͵Ķ��������±�[]����������õ���������
//	while (itl != listFlo.end()) {
//		cout << *itl << " ";
//		++itl;
//	}
//	cout << endl;
//
//	return 0;
//}





