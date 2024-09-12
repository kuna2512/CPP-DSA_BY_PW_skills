/*
Reverse part of array.
     0 1 2 3 4 5 
arr |1|6|2|3|7|4|

rev |4|7|3|2|6|1|

          0 1 2 3 4 5
rev(1,4) |1|7|3|2|6|4|

          0 1 2 3 4 5
rev(0,3) |3|2|6|1|7|4|
==============================
output : 
Original Array : 3 8 2 7 9 12 194 
Reverse Part : Original Array : 9 7 2 8 3 12 194
*/
#include<bits/stdc++.h>
using namespace std;
void display(vector<int>& a){
     cout<<"Original Array : ";
     for(int i=0; i<a.size(); i++){
          cout<<a[i]<<" ";
     }
     cout<<endl;
}
void reversePart(int i, int j, vector<int>& vec){
     while(i<=j){
          int temp = vec[i];
          vec[i] = vec[j];
          vec[j] = temp;
          i++;
          j--; 
     }
     return ;
}
int main(){
     vector<int> c;
     c.push_back(3);
     c.push_back(8);
     c.push_back(2);
     c.push_back(7);
     c.push_back(9);
     c.push_back(12);
     c.push_back(194);
     display(c);
     // reversePart
     reversePart(0,4,c);
     cout<<"Reverse Part : ";
     display(c);

}