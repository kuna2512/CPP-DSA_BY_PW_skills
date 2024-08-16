/*
Enter the no. of lines : 4
      A
    A B C
  A B C D E
A B C D E F G
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the no. of lines : ";
    cin>>n;
    for(int i=1; i<=n; i++){
        // space
        for(int j=1; j<=n-i; j++){
            cout<<"  ";
        }
        // pyramid
        for(int k=1; k<=2*i-1; k++){
            cout<<(char)(k+'A'-1)<<" ";
        }
        cout<<endl;
    }
}