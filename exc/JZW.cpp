#include <iostream>
#include<cmath>
using namespace std;
class point
{
  private:
    float x, y;

  public:
    point(float xx, float yy)
    {
        x = xx;
        y = yy;
    }
    float getX() { return x; }
    float getY() { return y; }
};

class Rectangle
{
  private:
    point *a, *b; //在一个类中声明另一个类的对象，必须同时定义。不能把定义和声明分开。如果一定要分开，就声明称指针类对象。
  public:
    Rectangle(point &_a, point &_b)
    {
        a = &_a;
        b = &_b;
    }
    void length();
    void s();
};

void Rectangle::length()
{
    float lengths;
    lengths = (abs(a->getX() - b->getX()) + abs(b->getY() - a->getY())) * 2;
    cout << "lentgh=" << lengths;
}
void Rectangle::s()
{
    float ss;
    ss = abs(a->getX() - b->getX()) * (b->getY() - a->getY());
    cout << "s=" << ss;
}

int main()
{
    point a(1,1);
    point b(2,2);
    Rectangle r1(a,b);
    r1.length();
    cout<<endl;
    r1.s();
    cin.get();
    return 0;
}