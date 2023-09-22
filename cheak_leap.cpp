#include <iostream>

int main(){
    int year = 2024;

    if (year % 4 == 0 && year % 400 == 0){
        std::cout << "This is a leap year" << std::endl;
    } 
    else {
        std::cout << "This is not a leap year" << std::endl;
    }
}