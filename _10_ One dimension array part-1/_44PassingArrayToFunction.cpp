/*
output : 
2 4 6 78 3 1 
107 9 6 78 3 1
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={2,4,6,78,3,1};
    int* ptr = arr; // giving address;
    for(int i=0; i<=5; i++){  // Changed 'i<=6' to 'i<6' to avoid out-of-bounds access
        cout<<ptr[i]<<" ";
    }
    cout<<endl;
    *ptr=107;
    ptr++;
    *ptr=9;
    ptr--;
    for(int i=0; i<=5; i++){  // Changed 'i<=6' to 'i<6' to avoid out-of-bounds access
        cout<<ptr[i]<<" ";
    }
}
