/*

1
0 1
1 0 1
0 1 0 1
1 0 1 0 1
0 1 0 1 0 1
1 0 1 0 1 0 1 
-----------------------------
concept:-
1. if(i==j) -> 1
2. if i & j both odd -> 1 or if((2%i!=0) && (2%j!=0)) -> in that condition both give odd value.
   i & j both even -> 1
3. if ((i+j)%2==0) ->  in this condition print even value.
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter no. of rows : ";
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            if((i+j)%2==0){
                cout<<1<<" ";
            }
            else{
                cout<<0<<" ";
            }
        }
        cout<<endl;
    }

}