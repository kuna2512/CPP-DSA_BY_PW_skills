/*
Enter the value of no. : 3
1 
1 1 
1 2 1 
1 3 3 1
-------------------------------
Pascal tringle Optimised
(sup n)c(sub r+1) = n!/(r+1)*[n-(r+1)]! 
                  => n!/(r+1)* r! *(n-r-1)!  
                  => n! * (n-r)/ri*(r+1)*(n-r)i
                  => (ni/ri*(n-r)!) * (n-r/r+1)
(sup n)c(sub r+1) => ((sup n)c(sub r)) * n-r/r+1

eg :- 5C4 => 5C3+1 
          => (5c3) * (5-3/3+1)
          => (5c3) * 2/4
          => (1/2) * (5!/3!*2!)
          => (1/2) * (120/6*2)
          => 120 answer  

   find 4 ---to---> 6
        |           |
(sup i)C(sub j)  (sup i)c(sub j+1) => ((sup j)c(sub j)*(i-j/j+1)
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of no. : ";
    cin>>n;
    for(int i=0; i<=n; i++){
        int curr = 1;
        for(int j=0; j<=i; j++){
            cout<<curr<<" ";
            curr = curr*(i-j)/(j+1);
        }
        cout<<endl;
    }
    
}