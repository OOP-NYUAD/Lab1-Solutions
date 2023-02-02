/*5A: Write an overloaded function to calculate sum of two or three 
different integers or doubles. (Also consider cases when one number 
is of integer type and other is of double type).*/

double add(int a, int b, double c){
    return a + b + c;
}

double add(int a, double b){
    return a + b;
}

/*5B: Write an overloaded function Volume() to calculate volume of 
a cube, volume of a cylinder and volume of a cuboid

    - Volume of cube: side ^ 3
    - Volume of cylinder: pi * r^2 * h
    - Volume of cuboid: width * length * height

*/

double volume(double a){
    return a*a*a;
}

double volume(double r, double h){
    return r*r*h*3.141;
}

double volume(double w, double l, double h){
    return w*l*h;
}
