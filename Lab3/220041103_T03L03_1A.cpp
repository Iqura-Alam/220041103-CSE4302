#include<iostream>
using namespace std;
class Time
{
private:
    int hour;
    int minute;
    int second;
public:
    Time():hour(0), minute(0), second(0) {}
    int hours()
    {
        return hour;
    }
    int minutes()
    {
        return minute;
    }
    int seconds()
    {
        return second;
    }
    void reset(int h,int m,int s)
    {
        if (h >= 0 && h < 24 && m >= 0 && m < 60 && s >= 0 && s < 60)
        {
            hour = h;
            minute = m;
            second = s;
        }
        else
        {
            cout << "Invalid time" << endl;
        }
    }
    void advance(int h, int m, int s)
    {
        second += s;
        if (second >= 60)
        {
            minute += second / 60;
            second = second % 60;
        }
        minute += m;
        if (minute >= 60)
        {
            hour += minute / 60;
            minute = minute % 60;
        }
        hour += h;
        if (hour >= 24)
        {
            hour = hour % 24;
        }
    }
    void print() const
    {
        cout<<hour<<":"<<minute<<":"<<second<<endl;
    }
};
int main()
{
    Time t;
    t.print();
    t.reset(15,30,40);
    t.print();
    t.advance(4,5,6);
    t.print();
    t.reset(78,2,5);


}
