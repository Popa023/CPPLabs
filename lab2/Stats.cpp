//
// Created by razvan on 07.10.2018.
//

#include "Stats.h"
#include <math.h>

int Stats::sum(const int *a, int count) {

    int sum = 0;
    for(int i = 0; i < count; i++){
        sum += a[i];
    }
    return sum;
}

double Stats::average(const int *a, int count) {
    return sum(a,count)/count;
}

int Stats::largest(const int *a, int count) {
    int max = 0;
    for(int i = 0; i < count; i++){
        if(a[i] > max){
            max = a[i];
        }
    }
    return max;
}

double Stats::deviation(int *a, int count) {
    int b[count];
    for(int i = 0; i < count; i++){
        b[i] = a[i] - average(a, count);
    }
    return sqrt(sum(b,count)/count);
}