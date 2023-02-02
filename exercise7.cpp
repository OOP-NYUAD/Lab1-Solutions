/*7A: Create two namespaces for two different geometrical shapes 
Rectangle and Triangle. Create function named calculateArea() to 
calculate area of respective geometrical shape based on the 
namespace used to call the function.*/


/*7B: Modify above namespaces to create nested namespaces for each 
shape inside a parent namespace called shape. Calculate area of 
rectangle and triangle via nested namespace to verify results.*/

#include <iostream>

// A and B below
namespace shape{

    namespace Rectangle{
        float calculateArea(float a, float b){ return a*b; }
    }

    namespace Triangle{
        float calculateArea(float b, float h){ return 0.5*b*h; }

    }

}

int main(){
    std::cout << shape::Rectangle::calculateArea(10, 20) << '\n'; 
    std::cout << shape::Triangle::calculateArea(10, 20) << '\n'; 

    return 0;
}