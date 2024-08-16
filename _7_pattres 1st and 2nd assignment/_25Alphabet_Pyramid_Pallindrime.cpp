/*
Enter no. of lines : 5
        A
      B A B
    C B A B C
  D C B A B C D
E D C B A B C D E
--------------------
concept :-
1. i-1 <--> 1 <--> i-1
2. for print :-
    A
  B A
C B A
like this we use in cout<<(char)j+'A'-1;
suppose j=2.
 j+'A'-1 => 2+'A'-1 => 1+'A' => B, j+'A'-1 => 1+'A'-1 => 'A', print :- B A
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter no. of lines : ";
    cin>>n;
    for(int i=1; i<=n; i++){
        // space 
        for(int j=1; j<=n-i; j++){
            cout<<"  ";
        }
        /*
        A
      B A
    C B A
  D C B A
E D C B A
        */
        for(int k=i; k>=1; k--){
            cout<<(char)(k+'A'-1)<<" ";
        }
/*
B
B C
B C D
B C D E
*/
        for(int j=1; j<=i-1; j++){
            cout<<(char)(j+'A')<<" ";
        }
        cout<<endl;
    }
}
// 23 minutes