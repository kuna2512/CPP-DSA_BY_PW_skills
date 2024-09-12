#include<iostream>
using namespace std;
int main(){
    int arr[]={3,4,4,5,2,7,8};
        int* ptr = arr; // gibing address
        for(int i=0; i<=6; i++){
            cout<<i[ptr]<<" ";
            ptr++;
        }
        ptr=arr; // ptr is pointing to 1st element.
        *ptr=8; // ptr[0]=8;
        ptr++; // ptr is pointing to 2nd element
        *ptr = 9;
        ptr--; // ptr is pointing to 1st element
        cout<<endl;
        for(int i=0; i<=6; i++){
            cout<<*ptr<<" ";
            ptr++; 
        }
    ptr=arr; // ptr is pointing to 1st element.
}