/*
Enter no. of lines : 5
        1
      2  2
    3      3
  4          4
5              5

*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter no. of lines : ";
    cin>>n;
    for(int i=1; i<=n; i++){
        // Print leading spaces
        for(int j=1; j<=n-i; j++){
            cout<<"  "; // Two spaces for alignment
        }
        // Print the first number
        cout<<i;
        // Print middle spaces (only for rows 2 to n)
        if(i > 1) {
            for(int k=1; k<=2*(i-1)-1; k++){
                cout<<"  "; // Two spaces to match the original format
            }
            // Print the second number
            cout<<i;
        }
        cout<<endl;
    }
    return 0;
}

