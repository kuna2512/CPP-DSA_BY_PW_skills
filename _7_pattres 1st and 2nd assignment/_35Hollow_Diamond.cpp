/*
Enter no. of lines : 5
        *
      *   *
    *       *
  *           *
*               *
  *           *
    *       *
      *   *
        *         
-------------------
concept:-
1. (2n-1)*(2n-1)
2. abs(i-j)==m/2 or i+j==m/2 or i+j==3*(n-1)
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter no. of lines : ";
    cin>>n;
    int m=2*n-1;
    for(int i=0; i<m; i++){
        for(int j=0; j<m; j++){
            if(abs(i-j)==m/2 || i+j==m/2 || i+j== 3*(n-1)){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}
