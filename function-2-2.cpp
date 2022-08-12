#include <iostream>
 #include <cmath>
//2-2
  int bin_to_int(int binary_digits[], int number_of_digits){

    int deci_value = 0;
    int r_counter = 0;
    if(number_of_digits < 30){
        for(int i = number_of_digits - 1; i >= 0 ; i--){

        deci_value = deci_value + binary_digits[i] * (pow(2,r_counter));
        r_counter++;
    
    }

  } 
   return deci_value;

  }
  