#include <iostream>
#include <cmath>

using namespace std; // This is the prevailing namespaces we use

/*We can define our own namespaces though, ones that make more sense
in context. Let's try a simple example. Say we are making a program
that deals with 2D planes so we define a namespace called euclid*/

namespace euclid{
/*Inside where, we can define functions that relate to the topic, these
functions can even share names with known std:: functions*/

double dist(double p1_x, double p1_y, double p2_x, double p2_y){
    return ( sqrt( pow(p2_x - p1_x, 2) + pow(p2_y - p1_y, 2) ) );
}

double dist(double p1_x, double p1_y){
    return ( sqrt( pow(p1_x, 2) + pow(p1_y, 2) ) );
}

double angle(double x, double y){
    return atan2(y, x);
}

} // namespace euclid


int main(int argc, char *argv[]){
    /*Now that we have the namespace defined, we can refer to functions like so*/
    double p1_x = 0, p1_y = 4, p2_x = 3, p2_y = 2;

    cout << euclid::dist(p1_x, p1_y, p2_x, p2_y) << '\n'; 
    cout << euclid::angle(p1_x, p1_y) << '\n'; 

    return 0;
}