// Display this AP - 1,3,5,7.... upto 'n' terms.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of n : ";
    cin>>n;
    for(int i=1; i<=n; i+=2){
        cout<<i<<endl;
    }
}