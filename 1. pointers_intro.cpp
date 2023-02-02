#include <iostream>

using namespace std;

int main(int argc, char *argv[]){
    /*Pointers aren't widespread, aside from C and C++ they exist in a handful of languages
    Pointers, simply stated, are integers that store addresses. That's about it. They operate
    almost identicially to integers in the sense that you can add and subtract from them. 
    However, you cannot initialize them, setting pointers is done solely at the discretion
    of the operating system that is in charge of doing your memory management.

    Let's remember the syntax: */


    int variable = 10;  // this line allocates 4 bytes of space for an integer
                        // we don't know where it is stored but we can obtain that info

    int *ptr;           // this line allocates 8 bytes (because 64 bit architecture) for a *pointer*

    ptr = &variable;    // finally, we store the address of the variable in the pointer 

    /*Now that we have a pointer and an integer, let's print some information*/

    cout << "Printing the variable prints out its contents, which are: " << variable << '\n';
    cout << "Printing the address of the variable prints its location in memory, which is: " << &variable << "\n\n";

    /*To get the address (or reference) of a variable, the syntax is &VariableName*/

    /*Now to look at the pointer, lets prnt it's information*/

    cout << "Printing the pointer, prints out the address it is storing, which is: " << ptr << '\n';
    cout << "Printing the address of the pointer prints its location in memory, which is: " << &ptr << "\n\n";

    /*Two things to note:
        - Pointers are also stored in memory and as such, have references of their own (remember pointers to pointers?)
        - The address stored in the pointer is the same as the adderss of the variable
    */

    /*Now, "dereferencing" the pointer, means that we want to access the memory location that that pointer is pointing to.
    The syntax for this is *PointerName*/

    cout << "The information stored in the memory location pointed at by the pointer is: " << *ptr << '\n';
    
    return 0;
}