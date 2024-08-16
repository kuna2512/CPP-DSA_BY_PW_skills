#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter no. of lines: ";
    cin >> n;
    int a = 6;  // Width of the rectangle
    int b = 2;  // Height of the hollow part of the rectangle
    // Print top border
    for(int j = 1; j <= a; j++){
        cout << "*";
    }
    cout << endl;

    // Print hollow part
    for(int i = 1; i <= b; i++){
        cout << "*";  // Left border
        for(int j = 1; j <= a - 2; j++){
            cout << " ";  // Space inside the rectangle
        }
        cout << "*";  // Right border
        cout << endl;
    }

    // Print bottom border
    for(int j = 1; j <= a; j++){
        cout << "*";
    }
    cout << endl;

    return 0;
}
