/*

*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter no. of lines : ";
    cin>>n;
    for(int i=1; i<=n; i++){
        // Print the left side #
        for(int j=1; j<=i-1; j++){
            cout<<"#";
        }
        // Print the first *
        for(int k=1; k<=1; k++){
            cout<<"*";
        }
        // Print the middle #
        int p=2*(n-i);
        for(int l=1; l<p; l++){
            cout<<"#";
        }
        // Print the last *
        cout<<"*";
        cout<<endl;
    }
    return 0;
}
// this is not complete
