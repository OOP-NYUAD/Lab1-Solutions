/*6A: Write a template function add() to add elements of one array 
to the elements of another; for example add(arr1,arr2) should do 
arr1[i] += arr2[i] for each element of arr1.*/
#include <iostream>

using namespace std;


// It's more a reasonable to assume that the protoype will include the size of the array
template <typename T>
void add(T *arr1, T *arr2, int size){

    for(int i =0; i < size; i++)
        arr1[i] += arr2[i];
}


/*6B: Write a template function sort()to sort elements of arrays 
in ascending order. Elements can be of type int, double, float, 
long, char.*/

template <typename L>
void sort(L *arr, int n){
    for(int i = 0; i < n; i++){
        int min = arr[i], index = i;
        for(int x = i + 1; x < n; x++){
            if(arr[x] < min){
                min = arr[x];
                index = x;
            }
        }

        if(index != i){
            int temp = arr[i];
            arr[i] = arr[index];
            arr[index] = temp;
        }
    }
}


int main(){

    return 0;
}