#ifndef TIME_H
#define TIME_H
class Time
{
    int hour;
    int minute;
    int second;

  public:
    Time();
    Time(int _hour, int _minute, int _second);
    void add_H(int);
    void add_M(int);
    void add_S(int);
    void show();
    Time operator+(const Time &t);
};
#endif