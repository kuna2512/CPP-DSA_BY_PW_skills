/*
y =  f(x)  =  x^2 +3
       |         |
     output    input
f(x) -> it produce a output.
*/ 

/*
Take a,b,c as input and print the following pattern:
a=3, b=4, c=5
-----------
Enter no. of lines : 2
* 
* *
Enter no. of lines : 5
*
* *
* * *
* * * *
* * * * *
Enter no. of lines : 4
*
* *
* * *
* * * *
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    for(int k=1; k<=3; k++){
        cout<<"Enter no. of lines : ";
        cin>>n;
        for(int i=1; i<=n; i++){
            for(int j=1; j<=i; j++){
                cout<<"* ";
            }
            cout<<endl;
        }
    }
}