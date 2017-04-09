#ifndef _STO
#define _STO

typedef int Item;
class Stock
{
    int top;
    int SIZE;
    Item *item;

  public:
    Stock(int);
    bool push(const Item &item);
    bool pop(Item &item);
    bool isFull()const;
    bool isEmpty()const;
    Item show(int i);
    ~Stock();
};

#endif