#include <iostream>
#include <cstdlib>
const int ARSIZE = 10;
using namespace std;
void count(const char *);
int main()
{
    char str[ARSIZE];
    char tmp;
    cout << "please input line: ";
    cin.get(str, ARSIZE);
    while (cin && str[0])
    {
        cin.get(tmp);
        while (tmp != '\n')
            cin.get(tmp);
        count(str);
        cout << "please input line: ";
        cin.get(str, ARSIZE);
    }
    system("pause");
    return 0;
}
void count(const char *str)
{
    static int total=0;
    int num = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        num++;
    }
    cout << "num = " << num << endl;
    total++;
    cout<<"total = "<< total<<endl;
}