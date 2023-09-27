#include <iostream>

int main(){
    int n = 10;
    int p = 5;

    long sol = 1;

    for(int i = 1; i <=p; i++){
        sol *= n;
    }

    std::cout<< "The " << p <<"th power of " << n << " is : " << sol << std::endl;
}