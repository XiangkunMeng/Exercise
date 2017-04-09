// ArrayNew.cpp : 定义控制台应用程序的入口点。
//
#include"stdafx.h"
#include<iostream>
#include<stdlib.h>
int main()
{
	int f = 0, z = 0, l = 0;
	int *arr = new int[10];
	for (int i = 0; i < 10; i++)
	{
		std::cin >> arr[i];

		if (arr[i]>0)
		{
			z++;
		}
		else if (arr[i]<0)
		{
			f++;
		}
		else {
			l++;
		}
	}
	std::cout << "Positive number: "<<z;
	std::cout << "\nNegative numbers: "<<f;
	std::cout << "\nNumber of zeros: "<<l;
	delete []arr;
    system("pause");
	return 0;
}