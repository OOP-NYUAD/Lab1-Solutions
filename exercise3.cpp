/*3A: Write a recursive function to compute factorial of a number. 
Factorial of a number n is defined as: 

    fact(n) = 1                 , n = 1 || n = 0
    fact(n) = n * fact(n - 1)   , n > 1

*/
#include <iostream>
#include <cmath>

using namespace std;

int fact(int n){
    if(n <= 0) return 1;
    else return n * fact(n -1);
}

/*3B: Convert the following for loop in the main() to a recursive 
function call:

    #include <iostream>
    using namespace std;

    void printNumber(int i){
        cout << "The number is: " << i << '\n';
    }

    int main(){
        for(int i = 0; i < 10; i++){
            printNumber(i);
        }

        return 0;
    }

*/


// Please note that this is stupid.
// we use recursion where it makes sense
// this isn't an example of it
void printNumber(int current_i, int final_i){
    if(current_i == final_i) return;
    
    cout << "The number is: " << current_i << '\n';
    printNumber(current_i + 1, final_i);
}

/*3C: Write a recursive function to check if a number is a prime 
number or not. A prime number is an integer that has no integral 
factor but itself and 1.*/
bool isPrime(int n, int divisor){
    if(n <= 1) return false; // zero and one are base cases that are defined to be not primes

    if(divisor >= sqrt(n)) return true; // an optional optimization we can add
    else if(divisor == n) return true; // if we get to a divisor of n, it's a prime number
    else if(n % divisor == 0) return false; // if we found a divisor, return false    
    else return isPrime(n, divisor + 1); // if not, try with a smaller divisor
}

// we can also overload this function to take in one arguemnt that is the number
// it is also important to note that this is also stupid. checking for primes is
// much easier and more computationally efficient to do in loops then recursion 
bool isPrime(int n){
    return isPrime(n, 2);
}


int main(){
    
    return 0;
}