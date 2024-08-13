/*
Ques. Write a function to compute the greatest common
divisor of two given numbers.
---------------------------------
concept:-
x=24, y=60
1. HCF(x,y) <= min(x,y)
  ---------
      |
  Heighest, common factor
              -------------
                    |
                /*a number which is divisible by all intger value the
                we decelare in funtion for eg :- x,y or x,y,z or a,b,c,d,e,g.
                                                 | |    | | |    | | | | | |
                                                 1 12   1 6 12   1 2 3 4 6 12
                                                   ---      ---            ----
                                                    |        |               |
                                                   HCF      HCF             HCF(BIGGEST VALUE)                
*/
/*
output:-
Now enter two numbers.
Enter the 1st value : 24
Enter the 2nd value : 60
Gratest Common Divisor of two no. is : 12
--------------------------------------------
agar ek no. composite no. ho aur dusara co-prime no. ho to hamesha 1 print hoga.
*/
#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b){
    int hcf = 1;
    for(int i=1; i<=min(a,b); i++){
        if(a%i==0 && b%i==0){
            hcf=i;
        }
    }
    return hcf;
}
int main(){
    int n,m;
    cout<<"Now enter two numbers."<<endl;
    cout<<"Enter the 1st value : ";
    cin>>n;
    cout<<"Enter the 2nd value : ";
    cin>>m;
    cout<<"Gratest Common Divisor of two no. is : "<<gcd(n,m);
}
// 2 hours.
