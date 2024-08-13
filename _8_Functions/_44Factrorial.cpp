/*
Enter value of n : 10
1
2
6
24
120
720
5040
40320
362880
3628800
*/
#include<bits/stdc++.h>
using namespace std;
int fact(int m){
    int fact = 1;
    for(int i=2; i<=m; i++){
        fact *= i;
    }
    return fact;
}
int main(){
    int n;
    cout<<"Enter value of n : ";
    cin>>n;
    for(int i=1; i<=n; i++){
        cout<<fact(i)<<endl;
    }
}