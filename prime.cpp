#include <iostream>

int main(){
    int n = 18;

    int count = 1;

    for(int i=2; i <=n; i++){
        if(n%i==0){
            count++;
        }
    }

    std::cout << "The number " << n << ((count==2) ? " is a prime" : " is not a prime") << std::endl;
}