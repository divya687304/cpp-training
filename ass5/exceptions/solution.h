#pragma once
#include<iostream>
using namespace std;
#include<cmath>
double computeSquareRoot(double num) {
    if (num < 0) {
        throw domain_error("Cannot compute square root of a negative number.");
    }
    return sqrt(num);
}
