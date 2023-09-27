#include <iostream>

int main(){
    int n = 23451100, rev = 0, rem;
    std::cout << "The reverse of " << n;
    
    int rev = 0;

    while (n){
        rem = n%10;
        rev = rev*10 + rem;
        n = n/10;
       
    }

    std::cout << " is " << rev << std::endl; 
}