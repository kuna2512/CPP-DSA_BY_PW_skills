#include<bits/stdc++.h>
using namespace std;
int maximun(int x, int y){
    int a;
    if(x>y){
        a=x;
    }
    else{
        a=y;
    }
    return a;
}
int main(){
     int x,y;
    cout<<"Enter the value of x : ";
    cin>>x;
    cout<<"Enter the value of y : ";
    cin>>y;
    cout<<"Max of x, y is : "<<maximun(x,y)<<endl;
    
}