/*
Take input marks of a student and print the grade according to marks:
1. 91-100 Excellent
2. 81-90 Very good
3. 71-80 good
4. 61-70 can do better
5. 50-60 Average 
6. 40-50 Below Average
7. <40 fail
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the percentage of marks :";
    cin>>n;
    if(n>=91 && n<=100){
        cout<<"Excellent";
    }
    if(n>=81 && n<=90){
        cout<<"Very good";
    }
    if(n>=71 && n<=80){
        cout<<"Good";
    }
    if(n>=61 && n<=70){
        cout<<"Can do better";
    }
    if(n>=51 && n<=60){
        cout<<"Average";
    }
    if(n>=40 && n<=50){
        cout<<"Below Average";
    }
    if(n>=0 && n<=40){
        cout<<"fail";
    }
    return 0;
}