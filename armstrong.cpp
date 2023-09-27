#include <iostream>
#include <cmath>

int find_digits(int x){
    int count = 0;

    while(x){
        count++;
        x = x/10;
    }
    return count;
}

int main(){
    int n = 16341;
    int temp = n;
    int digits = find_digits(n);

    int sum = 0;
    
    while(temp){
        sum += std::pow((temp%10), digits);
        temp = temp/10;
    }

    std::cout << "The number " << n << ((n == sum) ? " is an armstrong number." : " is not an armstrong number.") << std::endl;
}