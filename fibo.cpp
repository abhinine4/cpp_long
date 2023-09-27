#include <iostream>

int main(){
    int n = 10;
    int fibo1 = 0;
    int fibo2 = 1;
    std::cout << fibo1 << std::endl;
    std::cout << fibo2 << std::endl;
    for (int i = 2; i <= n; i++){
        int temp = fibo2;
        fibo2 = fibo1 + fibo2;
        fibo1 = temp;
        std::cout << fibo2 << std::endl;
    }

    std::cout << "The Fiboncci of " << n << " is " << fibo2 << std::endl;
}