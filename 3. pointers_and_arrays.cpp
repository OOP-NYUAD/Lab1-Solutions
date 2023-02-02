#include <iostream>

using namespace std;

int main(int argc, char *argv[]){
    /*Pointers and arrays are inherently related. They can be used in almost exactly
    the same way. Reason being, arrays are pointers...for the most part. Here's what
    I mean*/

    int A[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    cout << "Printing the array variable without an index yields the following: " << A << '\n';
    
    /*Now I will print the reference to the array. What do you think this will give
    us?*/

    cout << &A << '\n';

    /*This shows us that 'A' stores the pointer to the location where the array is stored
    Which is, by definition, a pointer. Which is why we can do the following:*/

    int *ptr = A;

    cout << "Printing this pointer should give us the same thing: " << ptr << '\n';

    /*Now having verified that arrays are like pointers, let's look at how pointers
    are like arrays. To do that, we must first remember dynamic memory allocation.
    Some things to remember about dynamic memory allocation:
        - Dynamic memory gets allocated on the heap
        - Dynamic memory gets allocated on runtime which means that;
        - Dynamic memory can be allocated at a variable size
        - Dynamic memory is requested from the operating system that returns a
        pointer to the memory
        - Dynamic memory must be deallocated when no longer in use to avoid 
        "Memory Leaks"
        - Dynamic memory allocation is a useful tool for conserving memory
        
    Here is the cpp syntax for dynamic memory allocation:*/


    int size = 20;
    int *dynamic_mem = new int[20]; // the "new" keyword does the allocation it
                                    // returns a pointer to the allocated memory 
                                    // we store that pointer for our use

    /*Worth noting is that dynamically allocated objects get initialized by the 
    default constructor unless given arguments*/

    for(int i = 0; i < size; i++) dynamic_mem[i] = i*i % 15;

    /*Note that the array can now be used exactly like an array is used (with [] 
    indexing). Which explains why arrays are sometimes passed to functions in the
    form: (int *array)*/


    delete[] dynamic_mem;   // we must free the memory using the delete keyword for a single object
                            // and delete[] for an array
    return 0;
}