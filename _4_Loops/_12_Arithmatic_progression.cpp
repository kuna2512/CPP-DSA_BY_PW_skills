#include<iostream>
using namespace std;
int main(){
    /*
    mathematic :- a=1 , d=2 
    an= a+(n-1)d => 1+2n-2 => 2n-1
    */
    int n;
    cout<<"Enter a number :";
    cin>>n;
    for(int i=1; i<=2*n-1; i+=2){
        cout<<i<<endl;
    }

}