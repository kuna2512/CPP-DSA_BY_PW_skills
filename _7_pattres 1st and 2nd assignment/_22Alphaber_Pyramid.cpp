/*
Enter the no. of lines : 5
        1
      1 2 3
    1 2 3 4 5
  1 2 3 4 5 6 7
1 2 3 4 5 6 7 8 9
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
            cout<<k<<" ";
        }
        cout<<endl;
    }
}