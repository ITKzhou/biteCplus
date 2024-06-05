#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <string>
using namespace std;

class Stu
{
public:
	Stu(string name = "", float score = 0.0f) :_name(name), _score(score) { _ID++; }
	~Stu() { _ID--; }

	void show()const;
	static int Get_ID()
	{
		return _ID;
	}

	friend Stu* input(Stu s[], int n);
	friend void sort(Stu s[], int n);


private:
	string _name;
	float _score;
	static int _ID;
};

int Stu::_ID = 0;//静态成员定义，要指定类域

void Stu::show() const
{
	cout << _name <<" " << _score << endl;
}

Stu* input(Stu s[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cin >> s[i]._name >> s[i]._score;
	}
	return s;
}

void sort(Stu s[], int n)
{
	int i = 0, j = 0;
	Stu tmp;
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0; j < n - i; j++)
		{
			if (s[j]._score < s[j + 1]._score)
			{
				tmp = s[j];
				s[j] = s[j + 1];
				s[j + 1] = tmp;
			}
		}
	}
}



//int main()
//{
//	Stu s[4];
//	input(s, 4);
//	sort(s, 4);
//	for (int i = 0; i < Stu::Get_ID(); ++i)
//	{
//		s[i].show();
//	}
//
//	return 0;
//}


