#include <iostream>
#include <cmath>
using namespace std;

//wk2_q2_quadratic_equation
//Ratu Faiha Salsabilla Rahmadina_532756

int main(){
    double a, b, c, x1, x2, real, imaginary;
    std::cout << "Enter coefficient a: ";
    std::cin >> a;
    std::cout << "Enter coefficient b: ";
    std::cin >> b;
    std::cout << "Enter coefficient c: ";
    std::cin >> c;

    double discriminant = b*b - 4*a*c;

    if (discriminant > 0){
        double root1 = (-b + sqrt(discriminant))/(2*a);
        double root2 = (-b - sqrt(discriminant))/(2*a);
        std::cout  << "There are two distinct real roots: " //this is because the value of the discriminant is positive
        << root1 << " " << "and" << " " << root2 << endl;
    }
    else if (discriminant == 0 ){
        double root = -b/(2*a);
        std::cout << "There is exactly one real root: " << root << endl; //this is because the value of the discriminant is zero
    }
    else{
        double real = -b/(2*a);
        double imaginary = sqrt(-discriminant)/(2*a);
        std::cout << "There are no real roots; they are complex and different: " //this is because the value of the discriminant is negative
        << real << " + " << imaginary << "i and " << real << " - " << imaginary << "i" << endl;
    }
return 0;
}