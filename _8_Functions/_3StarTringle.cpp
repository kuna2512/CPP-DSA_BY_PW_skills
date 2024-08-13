/*
* 
* * 
* * * 
* * * * 
* 
* * 
* * * 
* * * * 
*
* *
* * * 
* * * *
*
* *
* * *
* * * *
 */
#include<bits/stdc++.h>
using namespace std;
void starTringle(){
    for(int i=1; i<=4; i++){
        for(int j=1; j<=i; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
int main(){
    starTringle();
    starTringle();
    starTringle();
    starTringle();
}