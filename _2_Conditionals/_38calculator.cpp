/*
Write a program to create a calculator that performs basic arithmetic operation (add, subtract, multiply, divide)
using switch case and function. The calculator should should intput two numbers and an operator from user.
*/
#include<iostream>
using namespace std;
int main(){
    int x, y;
    cout<<"Enter 1st number : ";
    cin>>x;
    char op;
    cout << "Enter the operator : ";
    cin>>op;
    cout<<"Enter 2nd number : ";
    cin>>y;
    if (op == '+') {
        cout << x + y;
    } 
    else if (op == '-') {
        cout << x - y;
    } 
    else if (op == '*') {
        cout << x * y;
    } 
    else if (op == '/') {
        if (y != 0) {
            cout << x / y;
        } else {
            cout << "Error! Division by zero.";
        }
    } else {
        cout << "Invalid operator!";
    }
    return 0;
}
