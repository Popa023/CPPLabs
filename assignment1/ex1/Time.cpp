using namespace std;

#include <iostream>
#include <iomanip>
#include "Time.h"

Time::Time() {
    hour = min = sec = 0;
}

Time::Time(int h, int m, int s) {
    setTime(h, m, s);
}

void Time::setTime(int h, int m, int s) {
    hour = (h >= 0 && h < 24) ? h : 0;
    min = (m >= 0 && m < 60) ? m : 0;
    sec = (s >= 0 && s < 60) ? s : 0;
}

Time &Time::operator+=(unsigned int n) {
    sec += n;
    if (sec >= 60) {
        min += sec / 60;
        sec %= 60;
        if (min >= 60) {
            hour = (hour + min / 60) % 24;
            min %= 60;
        }
    }
    return *this;
}

Time Time::operator+(unsigned int n) const {
    Time tCopy(*this);
    tCopy += n;
    return tCopy;
}

Time &Time::operator++()        // prefix version
{
    *this += 1;
    return *this;
}

Time Time::operator++(int n)    // postfix version
{
    Time tCopy(*this);
    *this += 1;
    return tCopy;
}

ostream &operator<<(ostream &o, const Time &t) {
    o << setfill('0') << setw(2) << t.hour << ':' << setw(2) << t.min << ':' << setw(2) << t.sec;
    return o;
}

bool Time::operator==(const Time &t) const {
    int s1 = t.hour * 3600 + t.min * 60 + t.sec, s2 = hour * 3600 + min * 60 + sec;
    return s1 == s2;
}

bool Time::operator<=(const Time &t) const {
    int s1 = t.hour * 3600 + t.min * 60 + t.sec, s2 = hour * 3600 + min * 60 + sec;
    return s2 <= s1;
}

bool Time::operator>=(const Time &t) const {
    int s1 = t.hour * 3600 + t.min * 60 + t.sec, s2 = hour * 3600 + min * 60 + sec;
    return s2 >=s1;
}

Time &Time::operator-=(unsigned int a) {

    int s2 = hour * 3600 + min * 60 + sec;
    s2 -= a;
    while(s2 < 0){
        s2 += 24 * 3600;
    }
    this->setTime(s2 / 3600, (s2 % 3600) / 60, (s2 % 60));
    return *this;
}

Time Time::operator-(unsigned int a) const {
    Time tcopy(*this);
    tcopy -= a;
    return tcopy;
}

Time &Time::operator--() {
    return *this -= 1;
}

bool operator<(const Time &t1, const Time &t2) {
    int s1 = t1.hour * 3600 + t1.min * 60 + t1.sec, s2 = t2.hour * 3600 + t2.min * 60 + t2.sec;
    return s1 < s2;
}

bool operator>(const Time &t1, const Time &t2) {
    return !(t1 <= t2);
}

bool operator!=(const Time &t1, const Time &t2) {
    return !(t1 == t2);
}

Time operator--(Time &t1, int) {
    Time tcopy(t1);
    --t1;
    return tcopy;
}

unsigned int operator-(const Time &t1, const Time &t2) {
    int s1 = t1.hour * 3600 + t1.min * 60 + t1.sec, s2 = t2.hour * 3600 + t2.min * 60 + t2.sec, s3 = s1 - s2;
    while(s3 < 0){
       s3 += 24 * 3600;
    }
    return s3;
}


