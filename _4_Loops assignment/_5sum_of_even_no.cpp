/*
WAP to print sum of all the even digits of a given number.
-----------------------------
eg:- 122
1. To extract the rightmosdt digit do : num%10.
   I need to remove that digit.
2. To remove the nightmost digit do: num/10
*/
#include<iostream>
using namespace std;
int main(){
    int number;
    cout<<"Enter the number : ";
    cin>>number;
    int sum=0;
    while(number){
        int digit = number % 10;
        if(digit % 2 == 0){
            sum += digit;
        }
        number /= 10;
    }
    cout<<"The sum of even digits is : "<<sum<<endl;
    return 0;
}
