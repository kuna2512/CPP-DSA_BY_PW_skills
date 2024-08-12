/*Print all alphabates (uppercase with their ascii values)*/
#include<iostream>
using namespace std;
int main(){
    int i = 65;
    while(i<=90){
        cout<<i<<" : "<<(char)i<<endl;
        i=i+1;
    }
}