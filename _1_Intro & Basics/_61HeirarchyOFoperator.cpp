/*
                   Heirarchy of Operators
category                  Operator           Associativity

postfix                 ()[]_>,++__          left to right
Unary             +-!~++--(type)* &sizeof    Right to left
Incremet & Decrement      += -=              Right to left
Multiplicative            (*)/%              Left to right
Additive                    +-               left to right
Shift                      <<>>              Left  to right
Relational               <<= >>=             Left to right
Equality                  == !=              Left to right
Bitwise AND                 &                Left to right
Bitwise XOR                 ^                Left to right
Bitwise OR                  |                Left to right
Logical AND                 &&               Left to right

*/
#include<iostream>
using namespace std;
int main(){
    int i = 2*3/4+4+8-2+5/8;
    cout<<i;

}