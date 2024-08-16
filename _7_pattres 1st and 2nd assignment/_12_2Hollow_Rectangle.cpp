/*
Enter value of n: 5
Enter value of m: 8
* * * * * * * *
*             * 
*             *
*             *
* * * * * * * *
*/
#include<iostream>
using namespace std;
int main(){
    int n, m;
    cout << "Enter value of n: ";
    cin >> n;
    cout << "Enter value of m: ";
    cin >> m;

    // for print upper line
    for(int i = 1; i <= m; i++){
        cout << "* ";
    }
    cout << endl;

    for(int i = 1; i <= n - 2; i++){
        cout << "* ";
        // for print space
        for(int j = 1; j <= m - 2; j++){
            cout << "  "; // double space to account for the space taken by "* "
        }
        cout << "* ";
        cout << endl;
    }

    // for print lower line
    for(int i = 1; i <= m; i++){
        cout << "* ";
    }
    cout << endl;

    return 0;
}
// 36:30 minutes