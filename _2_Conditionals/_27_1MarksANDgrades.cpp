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
    if(n>91) cout<<"Excellent";
    else if(n>=81) cout<<"Very Good";
    else if(n>=71) cout<<"Good";
    else if(n>=61) cout<<"Can do better";
    else if(n>=51) cout<<"Average";
    else if(n>=41) cout<<"Below Average";
    else cout<<"fail";
    return 0;
}