#include <iostream>

using namespace std;

int main(int argc, char *argv[]){
    int num = ('\x44' << 24) | ('\x43' << 16) | ('\x42' << 8) | '\x41'; // dw about this bit
    int *ptr = &num; // initializing an integer and setting a pointer to it


    /*To show an example of pointer arithmetic in action, I made an integer that is made
    up of 4 bytes, and I set each byte to be an ascii value for a character. Now I will
    _type cast_ the pointer to a character pointer (which you can do) and print it*/

    cout << *((char *)ptr) << '\n'; // What is the output of this?
    
    /*Now, I can add one to this pointer to show that pointers can be used like integers
    Now keep in mind, since I type cast it as a character pointer, incrementing it will move
    it by 1 byte only*/

    cout << *((char *)ptr + 1) << '\n'; // What is the output of this?
    cout << *((char *)ptr + 2) << '\n'; // What is the output of this?
    cout << *((char *)ptr + 3) << '\n'; // What is the output of this?

    /*this is mainly to show that c is weird and it allows you a really large level of 
    control over your memory which is sometimes handy. This isn't one of those times
    however. Keep in mind, the integer that we are storing all this in is still an 
    integer that can be printed as an integer*/

    cout << num << '\n';
    return 0;
}