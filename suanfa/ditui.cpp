#include <iostream>
int main()
{
    int n = 5;
    int count;
    int f[100];
    f[2] = 1;
    f[3] = 2;
    for (int i = 4; i <= n; ++i)
    {
         f[i] = (i-1)*(f[i-1] + f[i-2]);
         std::cout<<f[i]<<std::endl;
    }
    std::cin.get();
    return 0;
}