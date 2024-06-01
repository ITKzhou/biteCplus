#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include <windows.system.h>
#include <iostream>

using namespace std;



typedef int DataType;

typedef struct SeqList
{
	DataType* a;
	int size;
	int capacity;

	void Init()
	{
		a = (DataType*)malloc(sizeof(DataType) * 4);
		size = 0;
		capacity = 4;
	}
	void Print()
	{
		for (int i = 0; i < size; ++i)
		{
			cout << a[size] << " ";
		}
		cout << endl;
	}

	void Destroy()
	{
		if (a != NULL)
		{
			free(a);
			a = NULL;
			size = 0;
			capacity = 0;
		}
	}

	void CheckCapacity()
	{
		if (size == capacity)
		{
			int newCapacity = capacity == 0 ? 4 : capacity * 2;
			DataType* tmp = (DataType*)realloc(a, sizeof(DataType) * newCapacity);
			if (tmp == NULL)
			{
				perror("realloc fail");
				return;
			}
			a = tmp;
			capacity = newCapacity;
		}
	}

	void PushBack(DataType x)
	{
		CheckCapacity();
		a[size] = x;
		++size;
	}


	void PushFront(DataType x)
	{
		CheckCapacity();
		int end = size - 1;//拿到最后一个元素的下标
		while (end >= 0)//遍历数组，依次把数据往后挪动
		{
			a[end + 1] = a[end];
			--end;
		}
		a[0] = x;
		++size;
	}


	void PopBack()
	{
		assert(size > 0);
		--size;//直接数组长度减1
	}


	void PopFront()
	{
		assert(size > 0);
		int start = 0;
		while (start < size)
		{
			a[start] = a[start + 1];//从头开始依次拿后面一个元素覆盖前面一个，一直到末尾
			++start;
		}
		--size;
	}


	void Insert(int pos, DataType x)
	{
		assert(pos >= 0 && pos <= size);
		CheckCapacity();
		int end = size - 1;
		while (end >= pos)
		{
			a[end + 1] = a[end];
			--end;
		}
		a[pos] = x;
		size++;
	}


	void Erase(int pos)//pos尾任意有效位置的下标
	{

		assert(pos >= 0 && pos <= size);
		int start = pos;
		while (start < size)
		{
			a[start] = a[start + 1];
			++start;
		}
		--size;
	}

	int& Get(int pos)
	{
		assert(pos >= 0);
		assert(pos < size);
		return a[pos];
	}

	int& operator[](int pos)
	{
		assert(pos >= 0);
		assert(pos < size);
		return a[pos];	
	}


	int Find(DataType x)
	{
		for (int i = 0; i < size; i++)
		{
			if (a[i] == x)
			{
				return i;
			}
		}
		return -1;
	}


}SeqList;


