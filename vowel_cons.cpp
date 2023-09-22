#include <iostream>
#include <vector>
#include <algorithm>

int main(){
    std::vector<char> vowel = {'a', 'e', 'i', 'o', 'u'};

    char x = 'd';

    // std::cin>>x;
    const char* val = "vowel";

    if (std::find(vowel.begin(), vowel.end(), x) == vowel.end()){
        val = "consonant";
    }

    std::cout<< "The character " << x << " is "<< val << std::endl;

    
}