/*
Enter the no. of  lines : 5
        * * * * *
      * * * * *
    * * * * * 
  * * * * *
* * * * *
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the no. of  lines : ";
    cin>>n;
    for(int i=1; i<=n; i++){
        // space
        for(int j=1; j<=n-i; j++){
            cout<<"  ";
        }
        for(int k=1; k<=n; k++){
            cout<<"* ";
        }
        cout<<endl;
    }
}