/*
Output:
num[0] = 200 num[25] = 100
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int num[26],temp;
    num[0]=100;
    num[25]=200;
    temp=num[25];
    num[25]=num[0];
    num[0]=temp;
    cout<<"num[0] = "<<num[0]<<" "<<"num[25] = "<<num[25];
}