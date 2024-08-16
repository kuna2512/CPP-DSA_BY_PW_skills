/*
Write a program to print out all armstrong numbers between 1 ans 500. 
[ if sum of cubes of each digit of the number is equal to the number itself, 
then the number is called an armstrong numbers.]
for example, 153 = (1*1*1)+(5*5*5)+(3*3*3)
*/
#include<iostream>
using namespace std;
int main(){
    for(int i=1; i<=500; i++){
        int temp=i;
        int sum=0;
        while(temp){
            int digit=temp%10;
            sum=sum+(digit*digit*digit);
            temp/=10;
        }
        if(sum==i){
            cout<<i<<endl;
        }
    }
}