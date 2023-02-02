#include <iostream>

using namespace std;

/*Inline functions are a way for cpp to make code run more efficiently.
Instead of pushing arguments onto the call stack and jumping to a different
location in memory to execute more code, you can define inline functions that
are essentially "replaced" by the function code whereever they are called.
This reduces overhead and decreases code runtime.*/

inline double square(double num){ return num*num; }

int main(int argc, char *argv[]){
    cout << "instead of wasting time calling a function, I can square this number more quickly by making an inline function\n";
    cout << "5.2^2 = " << square(5.2) << '\n';
    
    /*Using inline functions only makes sense if the function is simple and short. Don't make 
    your inline functions massive and complicated. Here's a helpful stackOverflow page about 
    the use of inline functions: https://stackoverflow.com/questions/60830/what-is-wrong-with-using-inline-functions*/

    return 0;
}