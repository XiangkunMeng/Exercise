#include <iostream>
#include <string>
using namespace std;
class worker
{
    string name, sex, duty, post, title;
    int number, age, pay;

  public:
    worker(int a, string b, string c, int d, string e, string f, string g, int h)
    {
        number = a;
        name = b;
        sex = c;
        age = d;
        duty = e;

        post = g;
        pay = h;
    }
    void output()
    {
        cout << number << endl
             << name << endl
             << sex << endl
             << age << endl
             << duty << endl
             << title << endl
             << post << endl
             << pay;
    }
};
int main()
{
    worker x1(123, "张全蛋", "男", 25, "质检员", "赵铁柱克星", "富土康3号流水线", 2000);
    x1.output();
    cin.get();
    return 0;
}