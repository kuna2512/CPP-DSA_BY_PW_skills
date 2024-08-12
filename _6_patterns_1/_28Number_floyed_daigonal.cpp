/*

1
 0
  1
   0
    1
    
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter No. Of Rows : ";
    cin>>n;
    int k = 1;
    for(int i=1; i<=n; i++){
        if(i%2!=0){
            k=1;
        }
        else{
            k=0;
        }
        for(int j=1; j<=i; j++){
            if(i==j){
                cout<<k;
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}