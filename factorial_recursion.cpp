#include <iostream>

int find_fact(int n);

int main(){
    int n = 4;

    std::cout << "The factorial of " << n << " is : " << find_fact(n) << std::endl;

}

int find_fact(int n){
    if(n > 0){
        return n * find_fact(n-1);
    }
    else{
        return 1;
    }
}