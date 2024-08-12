/*
Enter No. Of Rows : 5
11111
12222
12333
12344
12345
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
   for(int i=1; i<=n; i++){
    for(int j=1;j<=n;j++){
        cout<<min(i,j); //here it is built in function.
    }
    cout<<endl;
   }

}