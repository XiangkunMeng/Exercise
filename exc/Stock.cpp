#include "Stock.h"
#include <iostream>
using std::cout;
Stock::Stock(int _SIZE)
{
    SIZE = _SIZE;
    item = new Item[SIZE];
    top = -1;
}
bool Stock::isEmpty() const
{
    return top == -1;
}
bool Stock::isFull() const
{
    return top == SIZE;
}
bool Stock::push(const Item &_item)
{
    if (top < SIZE)
    {
        item[++top] = _item;
        return true;
    }
    else
        return false;
}
bool Stock::pop(Item &_item)
{
    if (top > -1)
    {
        _item = item[top];
        top--;
        return true;
    }
    else
        return false;
}
Item Stock::show(int i)
{
    return item[i];
}
Stock::~Stock()
{
    delete[] item;
}