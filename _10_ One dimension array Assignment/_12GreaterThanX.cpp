/*
Count the number of elements strictly greater than x in the given array.
*/
#include<bits/stdc++.h>
using namespace std;

void display(vector<int>& a) {
    for(int i = 0; i < a.size(); i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}
void greaterThan(vector<int>& b) {
    int x;
    int count = 0;  // Variable to store the count of elements greater than x
    cout << "Enter the value of x: ";
    cin >> x;
    
    cout << "Elements greater than " << x << " are: ";
    for(int i = 0; i < b.size(); i++) {
        if(b[i] > x) {  // If element is strictly greater than x
            cout << b[i] << " ";
            count++;
        }
    }
    cout << endl;
    cout << "Number of elements greater than " << x << " is: " << count << endl;
    return;
}
int main() {
    cout << "Normal Array: ";
    vector<int> v = {2, 5, 3, 7, 9, 8, 7, 12, 33, 8, 9, 40};

    display(v);

    // Find and display elements greater than x
    greaterThan(v);
    
    display(v);

    return 0;
}
