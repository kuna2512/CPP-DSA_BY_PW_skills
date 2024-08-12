/*
    *
    *
* * * * * 
    *
    * 
----------------------------
concept:-
  1 2 3 4 5
1 - - * - -
2 - - * - -
3 * * * * * 
4 - - * - -
5 - - * - -
only 3rd row and 3rd column print stars.
*/
#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"Enter a number : ";
  cin>>n;
  int mid=n/2+1;
  for(int i=1; i<=n; i++){
    for(int j=1; j<=n; j++){
      if(i==mid || j==mid){
      cout<<" * "; 
      }
      else{
        cout<<"   ";//here 4 space is maindatery for printing perfect star pluse. 
      }
    }
    cout<<endl;
  }
}
