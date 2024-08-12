/*
Dispaly this GP - 1,2,4,8,16,32,....upto 'n' terms. 

conditon :-
an = a*r ka power n-1
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n; // haya hum n ka value 10 likhege to loop 10 baar chalega
    int a=1;
    for(int i=1; i<=n; i++){
        cout<<a<<endl;
        a=a*2;
    }
}
