/*
Enter no. of lines : 6
1
A B
1 2 3
A B C D
1 2 3 4 5
A B C D E F
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter no. of lines : ";
    cin>>n;
    for(int i=1; i<=n; i++){
        if(i%2!=0){
            for(int j=1; j<=i; j++){
                cout<<j<<" ";
            }
            cout<<endl;
        }
        else{
            for(int k=1; k<=i; k++){
                cout<<(char)(k+'A'-1)<<" ";
            }
            cout<<endl;
        }
    }
}