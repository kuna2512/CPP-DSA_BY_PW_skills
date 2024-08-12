/*
composite no. :- it has factos other then 1 & the number itself.
eg :- 12 => 1,12 or 2,3,4,6
n => loop (i=2 to n-1)
     if(n%i==0) -> i is a factor.
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n; // if we entered 12 as input,
    for(int i=2; i<=n-1; i++){
         if(n%i==0){ 
        /*(12%2==0), (12%3==0), (12%4==0), (12%5!=0), (12%6==0) 
         so here we find 4 composite number of 12 so we find 4 result. 
         we here use break statement.
         */
            cout<<n<<" is a composite number "<<endl;
            break;
         }
    }
}