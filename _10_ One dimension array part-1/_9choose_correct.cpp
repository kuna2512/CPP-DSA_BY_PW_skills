/*
Ques. Are the following array declarations correct?
1. int a(25);
2. int size=10,b[size]; // correct :- int size = 10; int b[size];
3. int x= {0,1,2};
-----------------------------------
output:
Enter the Arrays : 54 6 3 4 3
Index of array is : 0 1 2 3 4 
*/
#include<iostream>
using namespace std;
int main(){
    int size=10, b[5];
    cout<<"Enter the Arrays : ";
    cin>>b[5];
    for(int i=0; i<=4; i++){
        cout<<"Index of array is : "<<i<<" "; // this print index of arrys
    }
}