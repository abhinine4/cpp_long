#include <iostream>
#include <cmath>

int main(){
    int a = -4, b = 5, c = -12;

    double d = b*b - 4*a*c;

    if (d > 0){
        double d1 = (-b + std::sqrt(d)) / (2*a);
        double d2 = (-b - std::sqrt(d)) / (2*a);
        std::cout << "The roots of this quadratic equation are real and different : " << d1 << " and "<< d2 << std::endl;
    }
    else if (d == 0){
        double d1 = -b / (2*a);
        std::cout << "The roots of this quadratic equation are real and same : " << d1 << " and "<< d1 << std::endl;
    }
    else{
        double real = -b/(2*a);
        double img = std::sqrt(-d)/(2*a);
        std::cout << "The roots of this quadratic equation are complex and different : " << real << " and "<< img << std::endl;
    }

    return 0;

}