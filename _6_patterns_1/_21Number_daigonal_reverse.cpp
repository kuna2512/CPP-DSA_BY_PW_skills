/*
         10
        9
       8
      7
     6
    5
   4
  3
 2        
1
*/

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    for(int i=1; i<=n; i++){
        //  for(int j=1; j<=n+1-i; j++) this line also process same task.
        for(int j=1; j<=n; j++){
            if(i+j==n+1){
                cout<<j;
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}