/*
Ques. Write a function that takes radius of circle as 
argument and returrn its area.
-----------------
output:-
Enter the value of radius : 5
78.5375
*/
#include<bits/stdc++.h>
using namespace std;
float areaOFcircle(int r){
    float area = 3.1415*r*r;
    return area;
}
int main(){
    int radius;
    cout<<"Enter the value of radius : ";
    cin>>radius;
    cout<<areaOFcircle(radius);
}