/*
Null pointer :- In C++, a null pointer is a special pointer value that indicates 
that the pointer is not pointing to any valid memory location. It essentially 
represents the absence of a valid address.

Good practices of using pointers
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int* ptr1 = NULL;
    int* ptr2 = 0;
    char *ptr = '\0'; // null character, not reserved address
    // '\0' is known as null character.
    cout << (void*)ptr << " " << ptr1 << " " << ptr2; // 0
}
