#include<iostream>
using namespace std;
#include"functions.h"

double str_len(string st) {
    double length = 0;
    for (char c: st) {
        length++;
    }
    return length;
}
string str_copy(string str1) {
    string str2;
    for (char c: str1) {
        str2+=c;
    }
    return str2;
}