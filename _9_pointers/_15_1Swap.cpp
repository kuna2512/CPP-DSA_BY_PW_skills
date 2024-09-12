/*
output:-
Value of a is : 2
Value of b is : 29
After Swap value of a is : 29
After Swap value of b is : 2
------------------------------------
1. Pass by value and Pass by reference
2. Writing the correct swap function.
*/
#include<bits/stdc++.h>
using namespace std;
void swap(int* x, int* y){
    int temp = *x;  // Corrected this line to use `int temp` instead of `int* temp`
    *x = *y;
    *y = temp;  // Corrected this line to remove the dereference operator (*)
    return ;
}
int main(){
    int a = 2, b = 29;
    cout << "Value of a is : " << a << endl;
    cout << "Value of b is : " << b << endl;
    swap(&a, &b);
    cout << "After Swap value of a is : " << a << endl;
    cout << "After Swap value of b is : " << b << endl;  // Corrected the typo "valur" to "value"
}
