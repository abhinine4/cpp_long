#include <iostream>

int main(){
    int x=10, y=2;
    int ch = 4;

    switch(ch){
        case 1:
            std::cout << "The sum is " << x+y << std::endl;
            break;
        case 2:
            std::cout << "The difference is " << x-y << std::endl;
            break;
        case 3:
            std::cout << "The product is " << x*y << std::endl;
            break;
        case 4:
            std::cout << "The division is " << x/y << std::endl;
            break;
        default:
            std::cout << "Enter correct operator " << std::endl;
    }
}