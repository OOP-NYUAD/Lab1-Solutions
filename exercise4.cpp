/*4A: Write an inline function Min(int,int) to calculate minimum between 
two numbers.*/

#include <iostream>

using namespace std;

inline int Min(int a, int b){
    return a > b ? b : a;
}

/*4B: Write inline functions to find GCD of two numbers. Test the program 
with various input values.*/

/*Note that this is an incorrect question. the inline keyword will be 
IGNORED by the compiler if the function has loops. But I will include the 
code for finding the gcd for reference*/
inline int GCD(int a, int b){
    int min = Min(a, b);
    int gcd = 1;

    for(int i = 1; i <= min; i++){
        if(a % i == 0 && b % i == 0) gcd = i;
    }

    return gcd;
}


int main(){

    return 0;
}