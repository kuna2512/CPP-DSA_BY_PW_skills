/*
vector :- vector is replacement of array, because array has fixed size.
or. A vector is a dynamic array-like container that can grow or shrink in size as needed.
It is part of the Standard Template Library (STL) and provides a flexible and efficient 
way to store collections of elements.

declaration : vector<int> nameOFvector; // this is the way of declararion of vector.
         vector<int> arr;
             _____________
         arr |1|2|3|4|5|6|
                // now we want to add elemet in array.
                // so it is create new array, that will be bigger than the old array.
            _____________           _________________
        arr |1|2|3|4|5|6| + new arr | | | | | | | | |
             __________________________________
         arr |1|2|3|4|5|6|7|8|9|10|11|12|13|14|
           // this process is take more time consuming and consuming more memory.
-------------------------------------------
syntax of vector :-


----------------------------------------
Reason to replacement of array to vector : 
suppose if we have any array int arr[5]={2,4,2,8,5};
                             now we can not add any element in the array.
                             if we want to increase size of array.
                             then we need to make new array. so because solving this problem
                             we use vector.



*/