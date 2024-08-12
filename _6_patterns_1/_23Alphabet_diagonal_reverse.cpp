/*
           L
          K
         J
        I
       H
      G
     F
    E
   D
  C
 B
A
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a Number : ";
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n+1-i; j++){
            if(i+j==n+1){
                cout<<(char)(j+64);
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}