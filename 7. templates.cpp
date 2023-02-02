#include <iostream>

using namespace std;

/*Function overloading *may* result in many different copies of essentially
the same code. We can mitigate this by using templates which make functions
type agnostic. Below is the syntax*/

template <typename T>
void swap(T *obj1, T *obj2){
    T temp = *obj1;
    *obj1 = *obj2;
    *obj2 = temp;
}

int main(int argc, char *argv[]){
    int a = 3, b = 5;

    cout << "a = " << a << " b = " << b << '\n';
    swap(&a, &b);
    cout << "a = " << a << " b = " << b << '\n';

    /*This can also be done with any other types*/
    double c = 1.4, d = 5.2;

    cout << "c = " << c << " d = " << d << '\n';
    swap(&c, &d);
    cout << "c = " << c << " d = " << d << '\n';

    return 0;
}