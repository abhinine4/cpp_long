#include <iostream>

int main(){
    
    int row = 5;

    for(int i = 0; i <=row; i++){
        for(int s=row; s > i; s--){
            std::cout <<" ";
        }

        for(int c=0; c < 2*i+1; c++){
            std::cout << "*";
        }
        std::cout << std::endl;
    }

}