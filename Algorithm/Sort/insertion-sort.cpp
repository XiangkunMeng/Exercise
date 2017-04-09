//插入排序
#include <iostream>
void insertSort(int (&a)[10],int len);
int main()
{
    int a[10] = {4, 3, 6, 1, 8, 7, 5, 2, 0, 9};
    int len = sizeof(a) / sizeof(a[0]);
    insertSort(a,len);
    for (int i = 0; i < len; i++)
    {
        std::cout << a[i] << "\t";
    }
    std::cin.get();
    return 0;
}
void insertSort(int (&a)[10],int len)
{
    for (int j = 1; j < len; j++)
    {
        int key = a[j];
        int i = j - 1;
        while (i > -1 && a[i] > key)
        {
            a[i + 1] = a[i];
            i--;
        }
        a[i+1] = key;
    }
}