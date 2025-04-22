#include<iostream>
using namespace std;
#include"functions.h"

double simple_calculator() {
    double num1, num2,total;
    cout<<"Enter num 1: ";
    cin>>num1;
    cout<<"Enter num 2: ";
    cin>>num2;
    char operation;
    cout<<"Enter operation : ";
    cin>>operation;
    if(operation == '+') {
        total = num1 + num2;
    }
    else if(operation == '-') {
        total = num1 - num2;
    }
    else if(operation == '*') {
        total = num1 * num2;
    }
    else if(operation == '/') {
        total = num1 / num2;
    }
    return total;
}