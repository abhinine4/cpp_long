#include <iostream>
#include <cmath>

void oct_dec(int o);

void dec_oct(int d);

int main(){
    int o = 2341;
    oct_dec(o);
    int d = 1249;
    dec_oct(d);
    return 0;
}

void oct_dec(int o){
    int i=0;
    int dec = 0;

    while (o){
        dec += (std::pow(8, i)) * (o%10); 
        o = o/10;
        i++;
    }

    std::cout << "The decimal is : " << dec << std::endl; 
}

void dec_oct(int d){
    int oct = 0, i=1;

    while(d){
        oct += (d%8)*i;
        i *= 10;
        d = d/8;
    }

    std::cout << "the octal is " << oct << std::endl;
    

}