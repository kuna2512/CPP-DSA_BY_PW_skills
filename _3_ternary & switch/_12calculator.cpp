/* Write a program to create a calculator that performs basic arithmetic operation (add, subtract, multiply, divide)
using switch case and function. The calculator should input two numbers and an operator from user.
*/
#include<iostream>
using namespace std;
int main(){
   int x, y;
    char op;
    cout << "Enter the first number: ";
    cin >> x;
    cout << "Enter the operator (+, -, *, /): ";
    cin >> op;
    cout << "Enter the second number: ";
    cin >> y;
    switch(op){
        case '+':
            cout << x + y;
            break;
        case '-':
            cout << x - y;
            break;
        case '*':
            cout << x * y;
            break;
        case '/':
            if (y != 0)
                cout << x / y;
            else
                cout << "Error! Division by zero.";
            break;
        default:
            cout << "Invalid operator!";
            break;
    }
    return 0;
}