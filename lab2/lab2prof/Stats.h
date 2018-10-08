/**
 *  Stats.h
 */

#ifndef _STATS_H_
#define _STATS_H_

using namespace std;

class Stats
{   public:
        static double average(int a[], int count);
        static int largest(int a[], int count);
        static int sum(int const a[], int count);
        static double deviation(int a[],int count);
        static int frequently(int a[],int count);
};

#endif
