/*
* * * * * 
* * * * 
* * * 
* * * * * * * * * 
* * * * * * * * 
* * * * * * * 
* * * * * * 
* * * * * 
* * * 
* *
* * * * * * * 
* * * * * *
* * * * *
* * * *
*/
#include<bits/stdc++.h>
using namespace std;
void starTringle(int x){ // decleration of argument
    for(int i=1; i<=x; i++){
        for(int j=1; j<=2*x-i; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
int main(){
    starTringle(3);
    starTringle(5);
    starTringle(2);
    starTringle(4);
    
}