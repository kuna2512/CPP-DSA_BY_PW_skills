/*
Enter value of a : 45
Enter valur of b : 555
600
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int a, b;
    cout<<"Enter value of a : ";
    cin>>a;
    cout<<"Enter valur of b : ";
    cin>>b;
    int *p1 = &a;
    int *p2 = &b;
    cout<<*p1 + *p2;

}