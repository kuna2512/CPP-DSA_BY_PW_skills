/*
Enter the value of n : 6
1
2
6
24
120
720
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;
    for(int i=1; i<=n; i++){
        int fact =1;
        for(int j=2; j<=i; j++){
            fact *= j;
        }
        cout<<fact<<endl;
    }
    return 0;
}