#include <iostream>
#include "10.6_man.h"
#include "10.6_man.cpp"
int main()
{
    man mxk("Xkenmon", -1, 19, "IT", 8000);
    man ld;
    ld.setName("Ludan");
    ld.setAge(19);
    ld.setSex(1);
    ld.setWork("nurser");
    ld.setSalary(5000);
    ld.show();
    std::cin.get();
}