/*8A: Write a C++ program to read a text file into a collection (vector) 
and write a utility function to find number of instances of a 
particular character in the text.*/

#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int occurances(vector<char> v, char key){
    int count = 0;

    for(int i = 0; i < v.size(); i++){
        if(v[i] == key) count++;
    }

    return count;
}

int main(int argc, char *argv[]){
    if(argc != 2){
        cout << "Provide filename pls\n";
        exit(-1);
    }

    // open file (take in 1st command line argument for file name)
    ifstream inFile;
    inFile.open(argv[1]);

    if(inFile.fail()){
        cout << "File \"" << argv[1] << "\" does not exist\n";
        exit(-1);
    }

    char temp;
    vector<char> text;

    while(1){
        inFile.get(temp);
        if(inFile.eof()) break;
        text.push_back(temp);
    }

    return 0;
}

/*Write a template function that takes a vector<T> vt and a vector<U> vu 
as arguments and returns the sum of all vt[i]*vu[i]s.*/

template <typename T, typename U>
int sumOfProds(vector<T> vt, vector<U> vu){
    int sum = 0;
    int minSize = vt.size() > vu.size() ? vu.size() : vt.size(); // give me minimum size

    for(int i = 0; i < minSize; i++){
        sum += vt[i] * vu[i];
    }

    return int;
}