/*
Enter no of students : 7
Enter the marks : 52 64 21 23 32 34 55 30
2 3 4 5
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter no of students : ";
    cin>>n;
    int marks[n]; // 0 to n-1;
    cout<<"Enter the marks : ";
    // input
    for(int i=0; i<=n-1; i++){
        cin>>marks[i];
    }
    for(int i=0; i<n-1; i++){
        if(marks[i]<35){
            cout<<i<<" ";
        }
    }
}