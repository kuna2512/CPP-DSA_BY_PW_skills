/*
Print the given pattern
1 1234
2 1234
3 1234
4 1234
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    for(int i=1; i<=n; i++){
        cout<<i<<" ";
        for(int j=1; j<=n; j++){
            cout<<j;
        }
        cout<<endl;
    }
}
