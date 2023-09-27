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

bool is_armstrong(int n){
    int temp = n;
    int digits = find_digits(n);

    int sum = 0;
    
    while(temp){
        sum += std::pow((temp%10), digits);
        temp = temp/10;
    }
    if (n == sum){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    int x= 1000, y=10000;

    for(int i=x; i <=y; i++){
        if (is_armstrong(i)){
            std::cout<< i << " is an armstrong number."<< std::endl;
        }
    }
}