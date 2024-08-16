/*
Enter the number of line : 5
        1
      1 2 3
    1 2 3 4 5
  1 2 3 4 5 6 7
1 2 3 4 5 6 7 8 9
  1 2 3 4 5 6 7
    1 2 3 4 5
      1 2 3
        1
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of line : ";
    cin>>n;
    int p=1;
    for(int i=1; i<=n; i++){
        // upper space 
        for(int j=1; j<=n-i; j++){
            cout<<"  ";
        }
        //  Upper numbers
        for(int k=1; k<=2*i-1; k++){
            cout<<k<<" ";
        }
        cout<<endl;
    }
    // Lower part of the pattern
    for(int i=n-1; i>=1; i--){
        // space
        for(int j=1; j<=n-i; j++){
            cout<<"  ";
        }
        // Lower numbers
        for(int k=1; k<=2*i-1; k++){
            cout<<k<<" ";
        }
        cout<<endl;
    }

    return 0;
}