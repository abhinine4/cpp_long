#include <iostream>

int find_sum(int n);

// sum = (n * n+1)//2

int main(){
    int n = 5;

    std::cout << "The sum of " << n << " natural numbers is : " << find_sum(n) << std::endl;
}

int find_sum(int n){
    if (n != 0){
        return n + find_sum(n-1);
    }
    return 0;
}