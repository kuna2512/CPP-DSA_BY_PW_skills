// Write a program to input week number(1-7) and print day of week name using switch case.
#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter day number : ";
    cin>>x;
    switch(x){
        case 1 :
            cout<<"Monday";
            break;
        case 2 :
            cout<<"Tuesday";
            break;
        case 3 :
            cout<<"Wednesday";
            break;
        case 4 :
            cout<<"Thursday";
            break;
        case 5 :
            cout<<"Friday";
            break;
        case 6 :
            cout<<"Saturday";
            break;
        case 7 :
            cout<<"Sunday";
            break;
        default:
            cout<<"This no is not week day";
    }
}