// Test_1.cpp : 定义控制台应用程序的入口点。
//

 #include "stdafx.h"
#include<iostream>
#include"stdlib.h"
int max1(int a, int b)
{
	if (a > b)
		return a;
	else
	{
		return b;
	}
}
int max1(int a, int b, int c)
{
	if (a > b)
	{
		if(a>c)
			return a;
		else
		{
			return c;
		}
	}
	else if (b > c)
	{
		return b;
	}
}
double max1(double a, double b)
{
	if (a > b) {
		return a;
	}
	else
	{
		return b;
	}
}
double max1(double a, double b, double c)
{
	if (a>b&a>c)
	{
		return a;
	}else if (b > c&b > a)
	{
		return b;
	}
	else
	{
		return c;
	}

}
int main()
{
    int x, y, z;
    std::cout << "Please enter the number you want to compare: \n";
    std::cin >> x >> y >> z;
    std::cout << "Maximum number is:  ";
	std::cout<<max1(x,y,z);
    system("pause");
    return 0;
}


