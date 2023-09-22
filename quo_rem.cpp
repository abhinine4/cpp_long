#include <iostream>

int main(){
    int x, y;
    x = 50;
    y = 10;
    double q, rem;

    q = x/y;
    rem = x%y;

    std::cout<<"Quotient : "<<q<<std::endl;
    std::cout<<"Remaindet : "<<rem<<std::endl;

    return 0;
}