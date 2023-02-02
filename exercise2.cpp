/*Write a program to read 3 sensors data stored in a text file. Each measurement 
from 3 sensors are stored on a separate line. The first line contains the number 
of records in the file. Use dynamic memory allocation to initialize arrays. For 
example, sample data is in the following format:

3
1.22   1.44   1.55
1.44   1.45   1.67
1.24   1.46   1.56

*/

#include <iostream>
#include <fstream>

using namespace std;

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

    // this is the 2D array allocation exercise so lets do that
    // we're expecting floats so I'll use floats

    // first we figure out how much data we have
    int rows, cols = 3;
    inFile >> rows;

    float **sensorData = new float*[rows];
    for(int i = 0; i < rows; i++) sensorData[i] = new float[cols];

    // next we read the file and we're done
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            inFile >> sensorData[i][j];
        }
    }

    // now to deallocate memory
    for(int i = 0; i < rows; i++) delete[] sensorData[i]; // deallocate individual rows
    delete[] sensorData; // deallocating master row

    return 0;
}