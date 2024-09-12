/*
output:-
size of int is 4 byte
size of char is 1 byte
size of bool is 1 byte
size of float is 4 byte
size of double is 8 byte
size of short is 2 byte
size of long is 4 byte
size of long long is 8 byte
------------------------------
Revisiting variables.

what a variable actuall is ?
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    cout<<"size of int is "<<sizeof(int)<<" byte"<<endl;
    cout<<"size of char is "<<sizeof(char)<<" byte"<<endl;
    cout<<"size of bool is "<<sizeof(bool)<<" byte"<<endl;
    cout<<"size of float is "<<sizeof(float)<<" byte"<<endl;
    cout<<"size of double is "<<sizeof(double)<<" byte"<<endl;
    cout<<"size of short is "<<sizeof(short)<<" byte"<<endl;
    cout<<"size of long is "<<sizeof(long)<<" byte"<<endl;
    cout<<"size of long long is "<<sizeof(long long)<<" byte"<<endl;
}