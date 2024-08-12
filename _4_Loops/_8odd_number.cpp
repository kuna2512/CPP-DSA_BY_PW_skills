#include<iostream>
using namespace std;
int main(){
    // odd print karane ke liye zero(0) se loop start karana padata.
    for(int i=0; i<=100; i++){
        if(i%2!=0){
            cout<<i<<endl;
        }
    }
}