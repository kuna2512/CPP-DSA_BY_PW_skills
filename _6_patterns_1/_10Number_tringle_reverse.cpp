/*
Print the given pattern.
12345
1234
123
12
1
----------------------
Rows no. + no. of stars
no. of stars = n+1-i
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n+1-i; j++){
            cout<<j;
        }
        cout<<endl;
    }
}