/*
Enter No. Of Rows : 3
11111
12221
12321
12221
11111
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
        cout<<min(a,b); //here it is built in function.
    }
    cout<<endl;
   }

}