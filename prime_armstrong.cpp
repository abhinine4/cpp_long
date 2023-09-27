#include <iostream>
#include <cmath>

bool is_prime(int x){
    int div = 0;
    for(int i=1; i <=x; i++){
        if (x%i==0){
            div++;
        }
    }
    if (div==2){
        return true;
    }
    else{
        return false;
    }
}

int find_digits(int x){
    int count = 0;

    while(x){
        count++;
        x = x/10;
    }
    return count;
}

bool is_armstrng(int x){

    int temp = x;
    int digits = find_digits(x);

    int sum = 0;
    
    while(temp){
        sum += std::pow((temp%10), digits);
        temp = temp/10;
    }
    if(x==sum){
        return true;
    }
    else{
        return false;
    }

}

int main(){
    int n = 16341;
    bool out;
    int ch = 2;

    switch(ch){
        case 1:
            std::cout << "Checking Prime ";
            out = is_prime(n);
            break;
        case 2:
            std::cout << "Checking Armstong ";
            out = is_armstrng(n);
            break;
        default:
            std::cout<< "Enter correct choice.";
            break;
    }

    std::cout << out << std::endl;
}