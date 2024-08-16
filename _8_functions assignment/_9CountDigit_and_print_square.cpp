/*
Ques. Write a function to count number of digits in a number
and then print the square of this number.
*/
#include<bits/stdc++.h>
using namespace std;
int square(int number){
    return number*number;
}
int countDigitSquare(int number){
    int count = 0;
    while(number){
        count++;
        number/=10;
    }
    return square(count); 
}
int main(){
    int num;
    cout<<"Enter the value of num : ";
    cin>>num;
    cout<<countDigitSquare(num)<<endl;
}