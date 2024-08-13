/*
Enter the value of x: 200
Enter the value of y: 5000
Min of x, y is: 200
Max of x, y is: 5000
*/

#include<bits/stdc++.h>
using namespace std;

int min_value(int x, int y) {
    int n;
    if(x < y) {
        n = x;  // returns the minimum value
    }
    else {
        n = y;  // returns the minimum value
    }
    return n;
}

int max_value(int x, int y) {
    int n;
    if(x > y) {
        n = x;  // returns the maximum value
    }
    else {
        n = y;  // returns the maximum value
    }
    return n;
}

int main() {
    int x, y;
    cout << "Enter the value of x: ";
    cin >> x;
    cout << "Enter the value of y: ";
    cin >> y;
    cout << "Min of x, y is: " << min_value(x, y) << endl;
    cout << "Max of x, y is: " << max_value(x, y) << endl;
}
