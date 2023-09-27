#include <iostream>

int main(){
    int n = 10;
    std::cout << "The factorial of " << n; 
    int fact = 1; 
    while (n != 1){
        fact *= n;
        n--;
    }

    std::cout << " is " << fact << std::endl;
}