#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    for(int i=4; i<=3*n-1; i+=3){
        cout<<i<<endl;
    }
}
/*
a=4, d=3
an=a+(n-1)d
=>4+(n-1)3
=>4+3n-3
=>3n-1 formula for loop
*/
