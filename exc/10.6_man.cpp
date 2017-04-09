#include <iostream>
#include <cstring>
#include "10.6_man.h"

man::man()
{
    std::cout << "Constructing..." << std::endl;
    setName("NULL");
    setAge(-1);
    setWork("NULL");
    setSalary(-1);
    setSex(-1);
    std::cout << "Call default constructor function succeed!\n\n";
    show();
}
man::man(const char *_name, int _sex, int _age, const char *_work, double _salary)
{
    std::cout << "Constructing " << _name << "..." << std::endl;
    setName(_name);
    setSex(_sex);
    setAge(_age);
    setWork(_work);
    setSalary(_salary);
    std::cout << "constructor " << _name << " complete.\n\n";
    show();
}

void man::setWork(const char *_work)
{
    std::strcpy(work, _work);
    std::cout << "set Work " << work << " success!\n";
}
void man::setName(const char *_name)
{
    std::strcpy(name, _name);
    std::cout << "set Name " << name << " success!\n";
}
void man::setAge(int _age)
{
    if (_age >= -1)
    {
        age = _age;
        if (age == -1)
            std::cout << "set Age "
                      << "unknow"
                      << " success!\n";
        else
            std::cout << "set Age " << age << " success!\n";
    }
    else
        std::cerr << "age < 0!\n";
}
void man::setSex(int _sex)
{
    if (_sex == 0)
    {
        sex = _sex;
        std::cout << "set sex man successful!\n";
    }
    else if (_sex == 1)
    {
        sex = _sex;
        std::cout << "set sex woman success!\n";
    }
    else if (_sex == 2)
    {
        sex = _sex;
        std::cout << "set sex Third gender success!\n";
    }
    else if (_sex == -1)
    {
        sex = _sex;
        std::cout << "set sex unknow succes!\n";
    }
    else
    {
        std::cerr << "please input 0/1/2!\n";
    }
}
void man::setSalary(double _salary)
{
    if (_salary >= 0)
    {
        salary = _salary;
        std::cout << "set Salary " << salary << " success!\n";
    }
    else if (_salary == -1)
    {
        salary = _salary;
        std::cout << "set Salary "
                  << "unknow"
                  << " success!\n";
    }
    else
    {
        std::cerr << "plase input >0!\n";
    }
}
void man::show()const
{
    std::cout << "Info:\n";
    showName();
    showSex();
    showAge();
    showWork();
    showSalary();
    std::cout << std::endl;
}

void man::showWork()const
{
    std::cout << "Work: " << work << std::endl;
}
void man::showName()const
{
    std::cout << "Name: " << name << std::endl;
}
void man::showId()const
{
    std::cout << "Id: " << id << std::endl;
}
void man::showAge()const
{
    if (age == -1)
    {
        std::cout << "Age unknow!\n";
    }
    else
        std::cout << "Age: " << age << std::endl;
}
void man::showSex()const
{
    if ((sex) == 0)
        std::cout << "Sex: man\n";
    else if (sex == 1)
        std::cout << "Sex: women\n";
    else if (sex == 2)
        std::cout << "Sex: Third gender\n";
    else if (sex == -1)
        std::cout << "Sex unknow!\n";
    else
        std::cerr << " sex read errer!\t sex = " << sex << std::endl;
}
void man::showSalary()const
{
    if (salary == -1)
    {
        std::cout << "Salary unknow!\n";
    }
    else
        std::cout << "Salary: " << salary << std::endl;
}