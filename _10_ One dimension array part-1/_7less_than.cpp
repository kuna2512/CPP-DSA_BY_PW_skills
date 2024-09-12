/*
Ques: Given an array of marks of students, if the marks 
of any student is less than 35 print its roll nummber.
[roll numbere here refers to the index of the array.]
----------------------------
concept : 
       -------------------------------------------
marks  |90|30|45|43|32|43|32| | | |  |  |  |  |  |
       -------------------------------------------
        0  1  2  3  4  5  6  7 8 9 10 11 12 13 14 
*/
/*
output:
Enter the marks : 45 63 52 25 20
4 5 
*/
#include<iostream>
using namespace std;
int main(){
    int marks[6];
    cout<<"Enter the marks : ";
    // input
    for(int i=1; i<=5; i++){
        cin>>marks[i];
    }
    for(int i=1; i<=5; i++){
        if(marks[i]<35){
            cout<<i<<" ";
        }
    }
}