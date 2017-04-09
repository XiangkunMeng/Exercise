#include "Time.h"
#include <iostream>
#include <iomanip>
using std::cout;
using std::endl;
Time::Time()
{
    hour = minute = second = 0;
}
Time::Time(int _hour, int _minute, int _second)
{
    if (_hour < 60 && _minute < 60 && _second < 60)
    {
        hour = _hour;
        minute = _minute;
        second = _second;
    }
}
void Time::add_H(int _hour)
{
    hour = _hour;
}
void Time::add_M(int _min)
{
    for (minute = _min + minute; minute > 60; hour++)
        minute -= 60;
}
void Time::add_S(int _sec)
{
    for (second = _sec + second; second > 60; minute++)
        second -= 60;
}
void Time::show()
{
    cout <<
        //setfill('0') << setw(2) <<
        "\t" << hour << " : " << minute << " : " << second << endl;
}
Time Time::operator+(const Time &t)
{
    Time sum;
    sum.minute = minute + t.minute;
    sum.second = second + t.second;
    sum.minute=sum.minute+sum.second/60;
    sum.second%=60;
    sum.hour = hour + t.hour + minute / 60;
    sum.minute %= 60;
        return sum;
}