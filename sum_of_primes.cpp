#include <iostream>

bool check_prime(int n);

int main(){

    int n = 34;
    bool flag = false;

    for(int i=2; i <= n/2; ++i){
        if (check_prime(i)){
            if (check_prime(n-i)){
                flag = true;
                std::cout << n << " = " << i << " + " << n-i <<  std::endl;
            }
        }
    }
    if(!flag){
        std::cout << "The number cannot be represented as a sum of prime numbers." << std::endl;
    }

    return 0;
}

bool check_prime(int n) {
  int i;
  bool is_prime = true;

  // 0 and 1 are not prime numbers
  if (n == 0 || n == 1) {
    is_prime = false;
  }
  
  for(i = 2; i <= n/2; ++i) {
    if(n % i == 0) {
      is_prime = false;
      break;
    }
  }

  return is_prime;
}
