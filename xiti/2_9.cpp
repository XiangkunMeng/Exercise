#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

int main()
{
    ofstream ofs("D:\\data.txt");
    ifstream ifs;
    int a;
    for (int i = 0; i < 10; i++)
    {
        cin >> a;
        ofs << a << " ";
    }
    ofs.close();
    cout << endl;
    ifs.open("D:\\data.txt");
    int b[10];
    for(int i = 0;!ifs.eof();i++){
        ifs>>b[i];
        cout<<b[i]<<"\t";
    }
    ifs.close();
    int sum = 0;
    for(int i = 0;i<10;i++)
    {
        sum+=b[i];
    }
    cout<<"\nsum = "<<sum<<endl;
    system("pause");
    return 0;
}