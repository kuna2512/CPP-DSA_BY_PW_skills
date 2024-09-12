/*
Ques: Find the unique number in a given Array where
all the elements are being repeated twice with one value being unique.
------------------------
psecudo :
for(int i=0; i<n; i++){
    int count = 0;
    for(int j=0; j<n; j++){
        if(i !=j && a[i]==a[j]){
            repeating;
            count++;
        }   
    }
    if(count == 0){
        cout<<a[i]<<" ";
        break;
    }
}
---------------------------------
output : 
Enter the size of array : 10
Enter the Element of array : 1 2 1 2 3 6 6 4 4 4
Unique number is : 3

*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    
    int a[n];
    cout<<"Enter the Element of array : ";
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    for(int i=0; i<n; i++){
        int count = 0;
        for(int j=0; j<n; j++){
            if((i != j) && (a[i] == a[j])){
                count++;
            }
        }
        if(count == 0){
            cout<<"Unique number is : "<<a[i]<<endl;
            break;
        }

    }
}
