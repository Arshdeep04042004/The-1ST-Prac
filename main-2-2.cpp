#include <iostream>

  extern int bin_to_int(int binary_digits[], int number_of_digits);

  int main(){

    int binary_digits[6] = {1,1,0,0,1,1};
    int number_of_digits = 6;

    std::cout << " " << bin_to_int(binary_digits, number_of_digits)<<std::endl;
  }
