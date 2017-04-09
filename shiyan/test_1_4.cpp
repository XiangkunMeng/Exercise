// 编程计算图形的面积。
// 程序可计算圆形、长方形、正方形的面积，
// 运行时先提求用户选择图形的类型，
// 然后，再要求用户对圆形输入半径值，对长方形输入长与宽，对正方形输入边长，
// 计算出面积的值后，在屏幕上显示出来。
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

const double PI = 3.1415926535;

void cal_squ();
void cal_cir();
void cal_rec();

int main()
{
    int choss;
    bool flag = true;
    while (flag)
    {
        cout << "\nPlease enter the type of graphics ";
        cout << "\n\t1->Square";
        cout << "\n\t2->Rectangular";
        cout << "\n\t3->Circular";
        cout << "\n\t4->Exit\n\n";
        cin >> choss;
        switch (choss)
        {
        case 1:
            cal_squ();
            break;
        case 2:
            cal_rec();
            break;
        case 3:
            cal_cir();
            break;
        case 4:
            flag = false;
        default:
            cout << "Please enter 1 2 3 or 4!";
            break;
        }
    }
    return 0;
}

void cal_squ()
{
    double length;
    cout << "\nPlease input length: ";
    cin >> length;
    cout << "Area: ";
    cout << length * length<<endl;
}
void cal_cir()
{
    double rad;
    cout << "\nPlease input RADIUS: ";
    cin >> rad;
    cout << "Area: ";
    cout << rad * rad * PI<<endl;
}
void cal_rec()
{
    double len, wid;
    cout << "\nPlease input length and width: ";
    cin >> len >> wid;
    cout << "Area: ";
    cout << len * wid<<endl;
}