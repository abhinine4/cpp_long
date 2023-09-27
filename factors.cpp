#include <iostream>

int main(){
    int n = 20;
    std::cout << "The factors of " << n << " are :" << std::endl;
    for(int i=1; i<=20; i++){
        if (n%i==0){
            std::cout << i << std::endl;;
        }
    }
}