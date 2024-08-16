/*
1) A function may be called more than once from any other function
ans : true

2) it is necessary for a function to return some value.
ans : false.  void fucntion not return any thing.

3) Can same function name be used for different function without any conflict?
ans : 
    void fun1(){
        cout<<"hello";
    }
    void fun1(){
        cout<<"ok bye ! ";
    }
    // if function name is same in that condition we need to change return type of both
    function or change any parameter otherwise compiler will start conflict.

    // or yes but there must be some differenciating factor.
    like :- 1. return type.
            2. count of argument or parameter.
            3. argument(data type). :- 1. void fun(int a){}
                                       2. void fun(char a){}

*/