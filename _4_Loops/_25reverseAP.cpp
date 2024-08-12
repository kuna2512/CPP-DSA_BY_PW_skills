// Display this AP-100,97,94,... upto all terms which are positive.
#include<iostream>
using namespace std;
int main(){
    int a = 100;
    for(; a>0;){ // here we can remove initialization and increment or decrement conditon.
        cout<<a<<endl;
        a=a-3;
    }
}