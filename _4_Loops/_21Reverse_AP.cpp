// Display this AP-100,97,94,... upto all terms which are positive.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    // n, n-1, n-2, n-3,.....and so on
    for(int i=n; i>=1; i--){
        cout<<i<<endl;
    }
}