#include<iostream>
using namespace std;
int main(){
    int t=10;
    while(t/=2){ // 10/2=>5 -> 5/2=>2, 2/2=>0
        cout<<"hello"<<endl;
    }
}