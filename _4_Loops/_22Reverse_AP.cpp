// Display this AP-100,97,94,... upto all terms which are positive.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    // n, n-3, n-6, n-9,.....and so on
    for(int i=n; i>=1; i-=3){
        cout<<i<<endl;
    }
}