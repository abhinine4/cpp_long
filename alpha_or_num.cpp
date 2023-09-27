#include <iostream>
#include <vector>
#include <algorithm>

int main(){
    char x = '0';
    std::vector<char> y = {'0', '1','2', '3', '4', '5', '6', '7', '8', '9'};

    if (std::find(y.begin(), y.end(), x) != y.end()){
        std::cout << "Its not an alphabet"<< std::endl;
    }
    else{
        std::cout << "Its an alphabet" << std::endl;
    }

}