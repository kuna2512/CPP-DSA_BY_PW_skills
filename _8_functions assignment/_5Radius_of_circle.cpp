/*
Ques. Write a function that takes radius of circle as 
argument and returrn its area.
----------------
output:-
Enter the value of radius : 7
153.934
*/
#include<bits/stdc++.h>
using namespace std;
float areaOFcircle(int r){
    return 3.1415*r*r;
}
int main(){
    int radius;
    cout<<"Enter the value of radius : ";
    cin>>radius;
    cout<<areaOFcircle(radius);
}