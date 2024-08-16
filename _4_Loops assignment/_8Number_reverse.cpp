#include<iostream>
using namespace std;
int main(){
    int number;
    cout<<"Enter a number  : ";
    cin>>number;
    int reverse=0;
    int num = number;
    while(number){
        reverse*=10;
        reverse+=(number%10);
        number/=10;
    }
    cout<<"The sum of number and its reverse is : "<<num + reverse<<endl;
}