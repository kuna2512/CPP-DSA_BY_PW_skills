
/*
wap to print the sum of given number and its reverse.
*/
#include<iostream>
using namespace std;
int main(){
    int number;
    cout<<"enter a number : ";
    cin>>number;
    int reverse = 0; 
    int num = number;
    while (number > 0) {
        reverse = reverse * 10 + (number % 10);
        number /= 10;
    } 
    cout<<"The sum of number and its reverse is : " << num + reverse << endl;
    return 0;
}