/*
Point out the errors(if only )in the following code:
int main(){
    int size;
    cin>>size;
    int arr[size];
    for(i=1; i<=size; i++){ // here integer is not declare.
        cin>>arr[i];
        cout<<arr[i]<<endl;
    }
    return 0;
}
-------------------------
Output :-
Enter the size : 5
Enter array elements : 1 5 3 8 9
output of array is : 1
output of array is : 5
output of array is : 3
output of array is : 8
output of array is : 9
*/
#include<iostream>
using namespace std;
int main(){
    int size;
    cout<<"Enter the size : ";
    cin>>size;
    int arr[size];
    cout<<"Enter array elements : ";
    for(int i=1; i<=size; i++){
        cin>>arr[i];
        cout<<"output of array is : "<<arr[i]<<endl;
    }
    return 0;
}