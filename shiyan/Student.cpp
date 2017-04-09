//  编写一个学生类。
// （1）输出每个学生的姓名、学号、成绩；
// （2）统计并输出学生的总人数、总成绩、平均成绩、最高成绩、最低成绩。
#include "cstring"
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

class Student
{
    static int totalNumber;
    static double totalSocer;
    static double maxSocer;
    static double minSocer;
    int id;
    int socer;
    char name[10];

  public:
    Student(const char *_name, int _id, double _socer);
    static void output();
    void showInfo();
};
Student::Student(const char *_name, int _id, double _socer)
{
    cout<<"Calling the constructor...\n";
    std::strcpy(name, _name);
    id = _id;
    socer = _socer;
    totalNumber++;
    totalSocer += _socer;
    if (_socer > maxSocer)
    {
        maxSocer = _socer;
    }
    if (_socer < minSocer)
    {
        minSocer = _socer;
    }
}
void Student::output()
{
    cout << "total Number: " << totalNumber;
    cout << "\ntotal Socer: " << totalSocer;
    cout << "\nmax Socer: " << maxSocer;
    cout << "\nmin Socer: " << minSocer;
    cout << "\nAverage Socer: " << totalSocer / totalNumber << endl;
}
void Student::showInfo()
{
    cout << "\tName: " << name;
    cout << "\n\tID: " << id;
    cout << "\n\tSocer: " << socer << endl;
}

int Student::totalNumber = 0;
double Student::totalSocer = 0;
double Student::maxSocer = 0;
double Student::minSocer = 100;

int main()
{
    Student stu_1 = Student("Tom", 1, 97);
    stu_1.showInfo();
    Student stu_2("Alice", 2, 34);
    stu_2.showInfo();
    Student *stu_3 = new Student("Tomas", 3, 45);
    stu_3->showInfo();
    Student::output();
    cout<<"Press any key to continue...";
    cin.get();
    return 0;
}