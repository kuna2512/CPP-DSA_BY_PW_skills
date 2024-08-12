/*
Enter No. Of Rows : 5
555555555
544444445
543333345
543222345
543212345
543222345
543333345
544444445
555555555
--------------------
concept:-
a. i=1 to 2*n-1
b. 1 1 1 1 1 1 1    1 1 1 1    1 1 1 1     1 1 1 1
   1 2 2 2 2 2 1    1 2 2 2    1 2 2 2     1 2 2 2
   1 2 3 3 3 2 1    1 2 3 3    1 2 3 3     1 2 3 3
   1 2 3 4 3 2 1 => 1 2 3 4 => 1 2 3 4  => 1 2 3 4 3 2 1
   1 2 3 3 3 2 1                     3  this is horizontal 
   1 2 2 2 2 2 1                     2        symetric
   1 1 1 1 1 1 1                     1
                       this is veritical
                             symetric
c. n=4 
   1 2 3 4-j
i
1  1 1 1 1
2  1 2 2 2  -> each i,j cell has a value min(i,j)
3  1 2 3 3
4  1 2 3 4  
d. after complilton c point [cout<<min(i,j);] now we apply :-
   int a =i;
   int b =j ;
   i+a=2n -> a=2n-i (i meas that particular time value of i)
    if(a>n) a=2*n-i;
    if(b>n) b=2*n-j;
d. NOw apply pseudo variable by using extra variable.
e. final changes
   1 ->n-0
   1 ->n-1
   1 ->n-2
   1 ->n-3
   .
   .
   x ->n-x+1
   
*/

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter No. Of Rows : ";
    cin>>n;
    /*
  1 1 1 1
  1 2 2 2  -> each i,j cell has a value min(i,j)
  1 2 3 3
  1 2 3 4
    */
   for(int i=1; i<=2*n-1; i++){
    for(int j=1;j<=2*n-1;j++){
        int a=i;
        int b=j;
        if(a>n){
            a=2*n-i;
        }
        if(b>n){
            b=2*n-j;
        }
        int x=min(a,b);
        cout<<n-x+1;
    }
    cout<<endl;
   }

}