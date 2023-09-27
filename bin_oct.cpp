#include <iostream>
#include <cmath>

void bin_oct(int b){
    int oct = 0, dec = 0; 
    int i = 0;
    // bin to decimal
    while (b){
        dec += (b%10) * std::pow(2,i);
        b = b/10;
        i++;
    }
    
    i = 1;
    // dec to oct
    while (dec){
        oct += (dec%8) * i;
        dec = dec/8;
        i *= 10;
    }
    std::cout << "The octal is " << oct << std::endl;
}

void oct_bin(int o){
    int dec = 0;
    int arr[11];
    int i = 0;

    //oct to dec
    while (o){
        dec += (std::pow(8, i)) * (o%10); 
        o = o/10;
        i++;
    }

    i = 0;
    //dec to bin
    while (dec){
        arr[i] = dec%2;
        dec /= 2;
        i++;
    }

    for(i=i-1; i >=0; i--){
        std::cout << arr[i];
    }
    std::cout << std::endl;
}

int main(){
    int b = 10001;
    bin_oct(b);
    int o = 21;
    oct_bin(o);
    return 0;
}