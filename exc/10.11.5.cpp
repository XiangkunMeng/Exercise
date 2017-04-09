#include "Stock.h"
#include "Stock.cpp"
#include <iostream>
int main()
{
    Item item;
    Stock one(10);
    one.push(11);
    one.push(22);
    one.push(33);
    one.push(44);
    for (int i = 0; i < 10; i++)
        std::cout << one.show(i) << std::endl;
    std::cout << item << std::endl;
    one.pop(item);
    for (int i = 0; i < 10; i++)
        std::cout << one.show(i) << std::endl;
    std::cout << item << std::endl;
    //one.pop(22);
}