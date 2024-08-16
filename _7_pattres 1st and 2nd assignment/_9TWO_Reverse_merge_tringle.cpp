/*
Enter no. of lines: 5
*
* *
* * *
* * * *
* * * * *
* * * *
* * *
* *
*
*/
#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter no. of lines: ";
    cin >> n;

    // Upper half of the pattern including the middle line
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            cout << "*"<<" ";
        }
        cout << endl;
    }

    // Lower half of the pattern
    for(int i = n-1; i >= 1; i--){
        for(int j = 1; j <= i; j++){
            cout << "*"<<" ";
        }
        cout << endl;
    }

    return 0;
}
