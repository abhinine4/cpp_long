#include <iostream>

bool prime(int n){
        int count = 1;
        for(int i=2; i <=n; i++){
            if(n%i==0){
                count++;
            }
        }
        return (count == 2) ? true : false;
    }

int main(){
    int x=5, y=7;

    for(int i=x; i <=y; i++){
        if(prime(i)){
            std::cout << i << std::endl;
        }
    }
}