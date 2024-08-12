/*
A
 B
  C
   D
    E
     F
      G
       H
        I 
         J
          K
           L
            M
             N
              O
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a Number : ";
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
           if(i==j){
             cout<<(char)(j+64)<<" ";
           }
           else{
            cout<<" ";
           }
        }
        cout<<endl;
    }
}