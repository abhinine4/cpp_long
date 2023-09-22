#include <iostream>

int main(){
    int x = 8;

    const char* val = "false";

    if (x % 2 == 0){
        val = "true";
    }

    std::cout << "The number is : " << val << std::endl;
}