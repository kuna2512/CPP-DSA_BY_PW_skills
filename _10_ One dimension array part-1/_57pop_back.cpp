/*
output : 
Size is : 36
Capacity is : 64
After pop_vack Size is : 28
After pop_vack Capacity is : 64
*/
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
                //   size  capacity
    v.push_back(4); // 1    1 
    v.push_back(5); // 2    2
    v.push_back(8); // 3    4
    v.push_back(42);// 4    4
    v.push_back(43);// 5    8
    v.push_back(3); // 6    8
    v.push_back(7); // 7    8
    v.push_back(12);// 8    8
    v.push_back(33);// 9    16
    v.push_back(8); // 10   16
    v.push_back(9); // 11   16
    v.push_back(40);// 12   16
    v.push_back(4); // 13   16
    v.push_back(5); // 14   16
    v.push_back(8); // 15   16
    v.push_back(42);// 16   16
    v.push_back(43);// 17   32
    v.push_back(3); // 17   32
    v.push_back(7); // 18   32
    v.push_back(12);// 20   32
    v.push_back(33);
    v.push_back(8);
    v.push_back(9);
    v.push_back(40);
    v.push_back(4);
    v.push_back(5);
    v.push_back(8);
    v.push_back(42);
    v.push_back(43);
    v.push_back(3);
    v.push_back(7);
    v.push_back(12);//32  32
    v.push_back(33);//33  64
    v.push_back(8);
    v.push_back(9);
    v.push_back(40);//36  64
    cout<<"Size is : "<<v.size()<<endl;
    cout<<"Capacity is : "<<v.capacity()<<endl;
    // pop_back
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    cout<<"After pop_vack Size is : "<<v.size()<<endl;
    cout<<"After pop_vack Capacity is : "<<v.capacity()<<endl;
}