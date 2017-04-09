#include <iostream>
class point
{
  private:
    int x;
    int y;

  public:
    int getX() { return x; }
    int getY() { return y; }
    point(int x_,int y_){
        x = x_;
        y = y_;
    }
};
int length(point &a, point &b)
{
    return a.getX()-b.getX()+b.getY()-a.getY();
}
int main(){
    point a(1,2);
    point b(3,2);
    std::cout<<length(a,b);
    std::cin.get();
    return 0;
}