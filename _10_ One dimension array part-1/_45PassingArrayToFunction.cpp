#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={2,54,8,35,89,1};
    int* ptr = arr;
    for(int i=0; i<=5; i++){
        cout<<*ptr<<" ";
        ptr++;
    }
}