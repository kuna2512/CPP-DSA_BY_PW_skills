/*
Size: 5
Capacity: 5
*/
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v(5);  // initialize the size of vector
    cout << "Size: " << v.size() << endl;        // Outputs the size of the vector
    cout << "Capacity: " << v.capacity() << endl; // Outputs the capacity of the vector
    return 0;
}
