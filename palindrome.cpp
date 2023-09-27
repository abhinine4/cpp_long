#include <iostream>

int main(){
    int n = 1221112214;
    int rev = 0;
    int temp = n;

    while (n){
        rev = rev*10 + n%10;
        n = n/10;
    }
    std::cout << "The number is " << ((temp == rev) ? "a palindrome" : "not a palindrome") << std::endl;

}