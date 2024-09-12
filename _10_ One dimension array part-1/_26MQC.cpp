/*
What is the different between the 5's in these two ecpression?

int num[5];
num[5] = 11;
1. first is particular element, second is type.
2. first is array size, second is particular element.
3. first is particular element, second is array size.
4. both specify array size.

answer : 2 

what would happen if you assign a value to an emelment of an
array whose subscript exceeds the size of the array?
1. the element will be set to 0.
2. nothing, it's done all the time.
3. other data may be overwritten.
5. error message from the compiler.

answer : 

state true of flase: 
1. The array int num[26] has twenty-six elements.
ans : True

2. The expression num[1] designates the first element in the array.
ans : flase => int num[0] is right.

3. It is necessary to initialize the array at the time of declaration
ans : flase -> it isn't necessary to initialize, we can initialize array that time 
and also declaration of array.

4. The expression num[27] designates the twenty-eighth element in the array.
ans : True : it means int num[27];
             so index start with num[0]; num[1];... upto num[27]; the are total 28.
*/