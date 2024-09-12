/*
predict the output :
main(){
    int sub[50], i;
    for(i=0; i<=48; i++){
        sub[i]=i;
        cout<<sub[i]<<endl;
    }
}
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int sub[50],i;
    for(i=0; i<=48; i++); // after semicolon this loop terminate here.
    {
        sub[i] = i;
        cout<<sub[i]<<endl;
    }
}