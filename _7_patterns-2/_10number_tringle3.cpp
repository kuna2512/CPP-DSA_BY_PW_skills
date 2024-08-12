/*
1
21
321
4321
54321
654321
--------------------------------
concept:- a. for(int j=1; j<=i; j++)
 i                         output:-
 1. 1  ->j=1 to 1          1
 2. 2 1  ->j=1 to 2        1 2
 3. 3 2 1  ->j=1 to 3  =>  1 2 3
 4. 4 3 2 1  ->j=1 to 4    1 2 3 4
 5. 5 4 3 2 1  ->j=1 to 5  1 2 3 4 5

b. for(int j=i; j>=1; j--)
 i                         output:-
 1. 1  ->j=1 to 1          1
 2. 2 1  ->j=1 to 2        2 1
 3. 3 2 1  ->j=1 to 3  =>  3 2 1
 4. 4 3 2 1  ->j=1 to 4    4 3 2 1
 5. 5 4 3 2 1  ->j=1 to 5  5 4 3 2 1
*/

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter no. of rows : ";
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=i; j>=1; j--){
            cout<<j;
        }
        cout<<endl;
    }
}