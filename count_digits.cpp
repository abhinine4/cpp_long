#include <iostream>

int main(){
    int n = 59488993;
    std::cout << "The integer " << n;
    int count = 0;
    while(n){
        count++;
        n = n/10;
    }
    std::cout << " has " << count << " digits." << std::endl;
}