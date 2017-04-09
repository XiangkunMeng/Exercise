#ifndef MAN_C
#define MAN_C

class man
{
    char work[50];
    char name[50];
    double salary;
    int age;
    int id;
    char sex;

  public:
    void setWork(const char *_work);
    void setName(const char *_name);
    void setId();
    void setAge(int _age);
    void setSex(int _sex);
    void setSalary(double _salary);

    void show()const;

    void showWork()const;
    void showName()const;
    void showId()const;
    void showAge()const;
    void showSex()const;
    void showSalary()const;

    man();
    man(const char *_name, int _sex, int _age, const char *work, double salary);
};
#endif