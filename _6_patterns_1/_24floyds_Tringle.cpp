/*
1 
2 3 
4 5 6 
7 8 9 10 
11 12 13 14 15 
--------------------
1. with the use of extra variable :-> bahar of outer loop we decleare
   int k=1;
   k++;
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a Number : ";
    cin>>n;
    int k = 1;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<k<<" ";
            k++;
        }
        cout<<endl;
    }
}
