/*
Ques : find the error.

double gerAverage(int arr[], int size);

int main(){
    int balance[5] = {1000,2,3,17,50};
    double avg;
    avg = getAverage(balance[0], 5);
    cout<<"Average value is : " <<avg <<endl;
    return 0;
}
*/
#include<bits/stdc++.h>
using namespace std;
double gerAverage(int arr[], int size);

int main(){
    int balance[5] = {1000,2,3,17,50};
    double avg;
    avg = getAverage(balance[0], 5); // this line is not correct this line send only 0th element not all arry address in getAverage function.
    cout<<"Average value is : " <<avg <<endl;
    return 0;
}