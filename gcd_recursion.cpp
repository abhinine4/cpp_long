#include <iostream>

int find_gcd(int a, int b);

int main(){
    int a = 12;
    int b = 5;
    std::cout<< "The GCD of "<< a << " and " << b << " is " << find_gcd(a, b) << std::endl;
}

int find_gcd(int a, int b){
    if (b == 0){
        return a;
    }
    else{
        return find_gcd(b, a%b);
    }
}

