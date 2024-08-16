/*
Enter no. of lines : 6
          1 
        2 1 
      3 2 1 
    4 3 2 1 
  5 4 3 2 1 
6 5 4 3 2 1 
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter no. of lines : ";
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i; j++){
            cout<<"  ";
        }
        for(int k=1; k<=i; k++){
            cout<<(i-k+1)<<" ";
        }
        cout<<endl;
    }
}