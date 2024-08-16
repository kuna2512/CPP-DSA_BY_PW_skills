/*
Enter no of lines : 5
1 1 1 1 1 
2 2 2 2 
3 3 3 
4 4 
5
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter no of lines : ";
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n+1-i; j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}