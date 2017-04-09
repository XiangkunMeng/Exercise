#include <iostream>
#include <iomanip>
#include "Time.h"
#include "Time.cpp"
#include<limits.h>
using namespace std;
int main()
{
    Time t1;
    t1.add_H(4);
    t1.add_S(40);
    t1.show();
    t1.add_S(3);
    t1.show();
    Time t2(1,23,45);
    t2.show();
    Time t3=t1+t2;
    t3.show();
    std::cin.get();
	return 0;
}