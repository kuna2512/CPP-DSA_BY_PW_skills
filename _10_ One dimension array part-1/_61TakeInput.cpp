/*
Enter the element : 4 5 3 2 8
Output : 4 5 3 2 8 
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v;
    /* if size not in that condition we take input like that */
    cout<<"Enter the element : ";
    for(int i=0; i<5; i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    cout<<"Output : ";
    for(int i=0; i<5; i++){
        cout<<v[i]<<" ";
    }
}