#include <iostream>

int find_gcd(int x, int y){
    int gcd;

    for(int i=1; i <= ((x > y) ? x : y); i++){
        if(x%i==0 && y%i==0){
            gcd = i;
        }
    }
    return gcd;
}

int main(){
    int x=100, y=200;
    int gcd = find_gcd(x, y);
    int lcm = (x*y)/gcd;

    std::cout << "The LCM is " << lcm << std::endl; 


}