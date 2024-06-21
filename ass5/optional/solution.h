#pragma once
#include <optional>
#include <string>
#include<iostream>
#include<climits>
using namespace std;


optional<int> parseInteger(const string& str) {
    if (str.empty()) {
        return nullopt;
    }

    int k=0;
    int result = 0;
    int i = 0;
    bool isNegative = false;

    if(str.length()==1 && str[0]=='-')
    {
        return nullopt;
    }
    if (str[0] == '-') {
        isNegative = true;
        k=1;
       
    }
    if (str[0] == '+') {
        k=1;
       
    }

    for (int i=k; i < str.size(); ++i) {
        char ch = str[i];
        if (ch < '0' || ch > '9') {
            return nullopt;
        }
        int digit=ch-'0';
        if(result>(INT_MAX-digit)/10)
        {
            return nullopt;
        }
        result = result * 10 + (ch - '0');
    }

    if (isNegative) {
        result = -result;
    }

    return result;
}
