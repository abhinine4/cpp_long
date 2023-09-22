#include <iostream>

int main(){
    int x = 1, y = 7, z = 9;
    int gr = z;

    if (x > y && x > z){
       gr = x;
    }
    else if (y > x && y > z){
        gr = y;
    }

    std::cout << "the greates is : " << gr << std::endl;

}