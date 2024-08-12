/*
123456789
1234 1234
123   123
12     12
1       1
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"No. of rows :";
    cin>>n;
    // 2n-1 -> 1 to n no. print without any space
    for(int i=1; i<=2*n-1; i++){
        cout<<i;
    }
    cout<<endl;
    int nsp=1;
    int m=n-1; // new lines.
    for(int j=1; j<=m; j++){
        // number
        for(int k=1; k<=m+1-j; k++){
            cout<<k;
        }
        // space
        for(int l=1; l<=nsp; l++){
            cout<<" ";
        }
        nsp+=2;
        // numbers
        for(int k=1; k<=m+1-j; k++){
            cout<<k;
        }
        cout<<endl;
    }
}