/*Write a program that dynamically resize an array to a bigger size. The program creates 
an array of an arbitrary size (specified by the user). Then the user may extend the array 
to a bigger size (this involves creating a temporary array with larger size, copying the 
values of the elements, and adding new values into the extension cells). Print the new 
array to the user to confirm the functionality.*/
#include <iostream>

using namespace std;

template <typename T>
void printArray(T arr, int size){
    for(int i = 0; i < size; i++) cout << arr[i] << ' ';
    cout << '\n';
}

int main(int argc, char *argv[]){
    // fun fact: argc stands for ARGument Count
    // and argv stands for ARGument Vector

    int size;

    cout << "Give me initial size of array\n";
    cin >> size;

    // let's make some pointers, I'll make it an character array just cause
    char *array = new char[size];

    // I'll initialize it with whatever
    for(int i = 0; i < size; i++) array[i] = 'A' + i;

    int newSize;
    cout << "Give me new size for the array\n";
    cin >> newSize;

    // now we make the temporary array needed for copying
    char *temp = new char[newSize];

    // we now copy
    for(int i = 0; i < size; i++) temp[i] = array[i]; // note we only go until size since we only have 'size' number of elements

    // add the extra characters
    for(int i = size; i < newSize; i++) temp[i] = 'A' + i;
    
    // now we must deallocate memory for old array since we no longer have any need of it.
    delete[] array;
    /*note that we must do this before we transfer the pointer otherwise, we have
    no way of keeping track of where the old memory is*/

    // now we can set the array pointer to be equal to temp (because we want our original array to be resized)
    array = temp;

    // for good measure
    temp = nullptr;


    // don't forget to deallocate old memory 
    delete[] array;
    return 0;
}