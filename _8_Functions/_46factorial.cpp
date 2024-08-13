/*
Enter the value of n : 5
1
2
6
24
120
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;
    int fact =1;
    for(int i=1; i<=n; i++){
        fact *= i;
        cout<<fact<<endl;
    }
    return 0;
}