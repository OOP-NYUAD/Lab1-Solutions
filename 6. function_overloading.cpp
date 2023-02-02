#include <iostream>
#include <string>

using namespace std;

/*Overloaded functions can be used to define multiple functions that do the same thing
but take different arguments. They must have the same return type and name but can have
different arguments. Below is an example*/

// This function uses a single character as a key
int occurances(string str, char key){
    int count = 0;
    for(int i = 0; i < str.length(); i++)
        if(str[i] == key) count += 1;

    return count;
}

// This instance uses an entire string 
int occurances(string str, string key){
    int count = 0;
    for(int i = 0; i < str.length(); i++){
        if( str.substr(i, key.length()) == key ) count += 1;
    }

    return count;
}

int main(int argc, char *argv[]){
    string str1 = "he", str2 = "hehe lmao hehe";
    char key = 'm';

    cout << occurances(str2, key) << '\n';
    cout << occurances(str2, str1) << '\n';

    return 0;
}