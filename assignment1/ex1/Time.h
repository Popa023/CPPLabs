// using _TIMEX_H_ since _TIME_H_ seems to be used by some C++ systems

#ifndef _TIMEX_H_
#define _TIMEX_H_

using namespace std;

#include <iostream>

class Time {
public:
    Time();

    Time(int h, int m = 0, int s = 0);

    void setTime(int, int, int);

    Time operator+(unsigned int) const;

    Time &operator+=(unsigned int);

    Time &operator++();    // prefix version
    Time operator++(int);  // postfix version

    // new member functions that you have to implement

    bool operator==(const Time &) const;

    bool operator<=(const Time &) const;

    bool operator>=(const Time &) const;

    Time operator-(unsigned int) const;

    Time &operator-=(unsigned int);

    Time &operator--();      // prefix version

private:
    int hour, min, sec;

    friend ostream &operator<<(ostream &, const Time &);

    // new friend functions that you have to implement

    friend bool operator<(const Time &, const Time &);

    friend bool operator>(const Time &, const Time &);

    friend bool operator!=(const Time &, const Time &);

    friend Time operator--(Time &, int);  // postfix version

    friend unsigned int operator-(const Time &, const Time &);  // difference in seconds
};

#endif
