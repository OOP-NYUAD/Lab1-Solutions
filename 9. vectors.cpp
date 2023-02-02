#include <iostream>
#include <vector> // make sure to include the relevent stl library

using namespace std;

int main(int argc, char *argv[]){
    /*Vectors are dynamically sized containers that expand the more data is placed
    inside. They can be addressed like normal arrays and data items can be appended
    to the end using a simple routine.

    vectors are "template classes" they can be used to store abstract data types

    The syntax is as follows:

    vector<data type goes here> name_of_vector_object

    i.e.*/

    vector<int> myVec;

    /*To add items to the end the method "push_back" is used*/

    myVec.push_back(1); // stored in index 0
    myVec.push_back(2); // stored in index 1
    myVec.push_back(3); // stored in index 2
    myVec.push_back(4); // stored in index 3
    myVec.push_back(5); // stored in index 4
    myVec.push_back(6); // stored in index 5

    cout << myVec[2] << '\n';

    /*Vectors also have the following methods:

        1. .clear() empties the content of the vector
        2. .size() returns the size of the vector (e.g. myVec.size() will return 6)
    */

    cout << "Size of vector before clearing: " << myVec.size() << '\n';
    myVec.clear();
    cout << "Size of vector after clearing: " << myVec.size() << '\n';
    return 0;
}