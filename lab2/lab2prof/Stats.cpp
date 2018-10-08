/**
 *  Stats.cpp
 */

#include "Stats.h"
#include <math.h>

using namespace std;

/* could also write this using sum */
double Stats::average(int a[], int count)
{   if (count==0)
        return 0;   // ought to throw an exception
    else
    {   float total = 0.0;
        for (int i = 0; i<count; i++)
            total += a[i];
        return total/count;
    }
}

int Stats::largest(int a[], int count)
{   if (count==0)
        return 0;   // ought to throw an exception
    else
    {   int big = a[0];
        for (int i = 1; i<count; i++)
            if (a[i] > big)
                big = a[i];
        return big;
    }
}

int Stats::sum(int const a[], int count)
{   int total = 0;
    for (int i = 0; i<count; i++)
        total += a[i];
    return total;
}

double Stats::deviation(int a[], int count) {
    double sum = 0;
    for(int i = 0; i < count; i++){
        sum += a[i] - average(a, count);
    }
    return sqrt(sum/count);
}

int Stats::frequently(int *a, int count) {
    int most = 0, app, current = 0, mostapp = 0;
    for(int i = 0; i < count; i++){
        current = a[i];
        app = 0;
        for(int j = 0; j < count; j++){
            if(current == a[j]){
                app++;
            }
        }
        if(mostapp < app){
            mostapp = app;
            most = current;
        }
    }
    return most;
}
