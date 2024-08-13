/*
Enter the valude of n : 5
1 
1 1
1 2 1
1 3 3 1
1 4 6 4 1
1 5 10 10 5 1 
6 // here 6 is the value of i.
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the valude of n : ";
    cin>>n;
    int i; // it is decelaration out of loop so we through this we can access from out of loop.
    for(i=0; i<=n; i++){
        int curr =1; 
        for( int j=0; j<=i; j++){
            cout<<curr<<" ";
            curr=curr*(i-j)/(j+1);
        }
        cout<<endl;
    }
    cout<<i; // now i print from hare. that is comment from above.
}