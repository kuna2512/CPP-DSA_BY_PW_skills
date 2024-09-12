/*
Enter element : 4 8 2 6 5 3
Output : 4 8 2 6 5 
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v(6);
    /* here size declaration is very inportant.
    if we not declare size then it will occer the error.
    */
    cout<<"Enter element : ";
    for(int i=0; i<6; i++){
        cin>>v[i];
    }
    cout<<"Output : ";
    for(int i=0; i<5; i++){
        cout<<v[i]<<" ";
    }
}