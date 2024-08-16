/*
Enter no. of lines : 5
 *       *
  *     *
   *   *
    * *
     *
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter no. of lines : ";
    cin>>n;
    for(int i=1; i<=n; i++){
        // spaces 
        for(int j=1; j<i; j++){
            cout<<" ";
        }
        cout<<"*";
        // space
        int m=2*(n-i);
        for(int j=1; j<m; j++){
            cout<<" ";
        }
        if(i != n) // print the second * only if it's not the last line
            cout<<"*";
        cout<<endl;
    }
    return 0;
}

