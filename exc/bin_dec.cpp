// #include <iostream>
// #include <math.h>
// #include<stdlib.h>

// int main()
// {
//     char bin[20];
//     int i = 0;
//     int dec = 0;
//     int num;
//     std::cin.get(bin, 20);
//     for (int i = 0; bin[i] != '\0'; i++)
//     {
//         num = i;
//     }
//     for (int i = 0; bin[i] != '\0'; i++)
//     {
//         if (bin[i] == '0')
//         {
//             num--;
//         }
//         else
//         {
//             dec += pow(2, num--);
//         }
//     }
//     std::cout<<dec;
//     std::cin.get();
//     system("pause");
//     return 0;
// }

#include <iostream>
using namespace std;
#define LEN 20
void Convert(int n, int a[])
{
    int i = LEN - 1;
    if (n < 0)
        ;
    else if (n == 0)
        a[i--] = 0;
    else
    {
        while (n != 0)
        {
            a[i--] = n % 2;
            n /= 2;
        }
    }
    for (int j = 0; j <= i; j++)
    {
        a[j] = -1;
    }
} 
int main()
{
    int n, j = 0;
    cout << "请输入一个十进制数（0~2147483647）: ";
    cin >> n;
    int a[LEN];
    char c;
    while (1)
    {
        Convert(n, a);
        cout << n << "=";
        for (int i = 0; i < LEN; i++)
        {
            if (a[i] != -1)
            {
                j++;
                cout << a[i];
            }
            if (j % 3 == 0 && j != 0)
                cout << " ";
        }
        cout << endl;
        cout << "是否继续？(y:继续，其它：退出): ";
        cin >> c;
        if (c == 'y')
        {
            cout << "请输入一个十进制数（0~2147483647）: ";
            cin >> n;
            j = 0;
        }
        else
            return 0;
    }
}
