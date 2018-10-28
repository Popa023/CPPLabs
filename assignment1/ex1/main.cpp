//
// Created by razvan on 28.10.2018.
//

#include <iostream>
#include "Time.h"

using namespace std;

int main()
{ const Time noon(12);
    const Time sixpm(18);
    const Time ninetenam(9,10,30);
    Time t(12);
    Time t2(12,45);
    Time t3(0,15);
    cout << "Testing operator==: expect true and false (1,0)" << endl;
    cout << (noon==t) << ' ' << (t==sixpm) << endl;
    cout << "Testing operator!=: expect false and true (0,1)" << endl;
    cout << (noon!=t) << ' ' << (t!=sixpm) << endl;
    cout << "Testing operator<: expect false, false and true (0,0,1)" << endl;
    cout << (t<noon) << ' ' << (t<ninetenam) <<  ' ' << (t<sixpm) << endl;
    cout << "Testing operator<=: expect true, false and true (1,0,1)" << endl;
    cout << (t<=noon) << ' ' << (t<=ninetenam) <<  ' ' << (t<=sixpm) << endl;
    cout << "Testing operator>: expect false, true and false (0,1,0)" << endl;
    cout << (t>noon) << ' ' << (t>ninetenam) <<  ' ' << (t>sixpm) << endl;
    cout << "Testing operator>=: expect true, true and false (1,1,0)" << endl;
    cout << (t>=noon) << ' ' << (t>=ninetenam) <<  ' ' << (t>=sixpm) << endl;
    cout << "12:45 - 35: should give 12:44:25" << endl;
    cout << t2-35 << endl;
    cout << "12:00 - 4800: should give 10:40" << endl;
    cout << noon-4800 << endl;
    cout << "00.15 - 1200: should give 23:55" << endl;
    cout << t3-1200 << endl;
    cout << "testing -=: should give 11:59:35" << endl;
    t -= 25;  cout << t << endl;
    cout << "testing postfix -- with 12:45 should give 12:45 and 12:44:59" << endl;
    cout << t2-- << ' ';
    cout << t2 << endl;
    cout << "testing prefix -- with 00.15: should give 00:14:59 and 00:14:59" << endl;
    cout << --t3 << ' ';
    cout << t3 << endl;
    cout << "12:22:10 - 12:20:45: should give 95 seconds " << endl;
    cout << Time(12,22,10)-Time(12,20,45) << endl;
    cout << "12:00 - 09:10:30: should give 10170 seconds " << endl;
    cout << noon-ninetenam << endl;
    cout << "09:10:30 - 18.00: should give 54630 seconds " << endl;
    cout << ninetenam-sixpm << endl;



    int a;     // a is an int
    a = 7;     // assign 7 to a
    int *aPtr = &a; // assign the address of a to aPtr

    cout << "The address of a is " << &a << endl;
    cout << "The value of aPtr is " << aPtr <<endl;
    cout << "The value of a is " << a << endl;
    cout << "The value of *aPtr is " << *aPtr <<endl;
    cout << "&*aPtr = " << &*aPtr << endl;
    cout << "*&a = " << *&a << endl;

}