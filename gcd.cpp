#include <iostream>


int main(){
    int a = 200;
    int b = 100;

    int gcd;

    for (int i = 1; i <= ((a<b) ? b : a); i++){
        if (a%i==0 && b%i==0){
            gcd = i;
        }
    }

    std::cout << "The GCD of " << a << " and " << b << " is " << gcd << std::endl;

    return 0;

}