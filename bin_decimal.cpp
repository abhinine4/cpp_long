#include <iostream>
#include <cmath>

void dec_to_bin(int n){
    int arr[11];
    int i = 0;

    while (n != 0){
        arr[i] = n%2;
        n = n/2;
        i++;
    }
    for(i=i-1; i >= 0; i--){
        std::cout << arr[i];
    }
    std::cout << std::endl;
}

double bin_to_decimal(int b){
    int pow = 0;
    long dec = 0;
    while (b){
        dec += (b%10) * std::pow(2,pow);
        b = b/10;
        pow++;
    }
    return dec;
}

int main(){
    int n = 156;
    dec_to_bin(n);

    int b = 10011100;
    std::cout << bin_to_decimal(b) << std::endl;
    return 0;
}