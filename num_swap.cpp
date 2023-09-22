#include <iostream>

int main(){
    int x = 5, y =6;
    std::cout << " X : " << x << " and y : " << y << std::endl;
    int temp = 0;

    temp = x;
    x = y;
    y = temp;

    std::cout << " X : " << x << " and y : " << y << std::endl;
}