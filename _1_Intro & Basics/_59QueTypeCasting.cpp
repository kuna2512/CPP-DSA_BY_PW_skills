/* Take float input and print the fraction part of real number.
eg :- 
real number  fractional number
x = 9.7      -> 0.7
x = 8.13     -> 0.13
x = 5.1234   -> 0.1234

DEFINATAION :- any given no. that coverted into less than 1 number that is franction number of real no. . thare are many example written above.
*/
#include<iostream>
using namespace std;
int main(){
    float x ;
    cout<<"Enter any float no. : ";
    cin>>x;
    float y = x-(int)x;
    cout<<"Enter real no. x = "<<x<<" and that fraction value is : "<<y;
}