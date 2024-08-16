/*
Enter no. of lines : 5
A B C D E F G H I
A B C D   F G H I 
A B C       F G H
A B           F G
A               F
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter no. of lines : ";
    cin>>n;
    for(int i=1; i<=1; i++){
        // Upper Alphabet
        for(int j=1; j<=2*n-1; j++){
            cout<<(char)(j+64)<<" ";
        }
        cout<<endl;
    }
/*
Enter no. of lines : 5
A B C D
A B C
A B
A

*/
    for(int i=1; i<=n; i++){
        // left alphabet
        for(int j=1; j<=n-i; j++){
            cout<<(char)(j+'A'-1)<<" ";
        }
        // space
        for(int k=1; k<=2*i-1; k++){
            cout<<"  ";
        }
        // right alphabet
        for(int l=1; l<=n-i; l++){
            cout<<(char)(l+'A'+4)<<" ";
            }
            cout<<endl;
        }
        return 0;
        
}
