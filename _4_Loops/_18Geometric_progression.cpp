/*
Dispaly this GP - 1,2,4,8,16,32,....upto 'n' terms. 
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    for(int i=1; i<=n; i*=2){
        cout<<i<<endl;
    }
}
