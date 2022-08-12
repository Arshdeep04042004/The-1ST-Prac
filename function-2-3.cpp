#include <iostream>
#include <cmath>
//2-3
int palindrome_sum(int integers[], int length){

    int sum = 0; //int sum_2 = 0;

    int rev = length -1;
    int pali_d = 0;
    if (length>0){
     if (length%2==0){
           for(int i= 0; i <= (length/2)-1 ; i++){
            if (integers[i]==integers[rev]){
             //rev = (rev*10) + integers[i];
            
             pali_d = 1;
             
             sum = (sum + integers[i] + integers[rev]);
             
            } else {
                sum = -2;
            }
             rev--;
        } 
         
        } else {
            //int n = round(n/2); 
            for(int i= 0; i < round(length/2) ; i++){
            if (integers[i]==integers[rev]){
             //rev = (rev*10) + integers[i];
            
             pali_d = 1;
             
             sum = sum + integers[i+1] + integers[rev] + integers[0];
             //sum = sum2/2;
             
             //sum = sum + integers[i];
            } else {
                pali_d = 0;
                sum = -2;
            }
             rev--;
           //  sum = sum/2;
        }
        }

    } else {
        sum = 0;
    }
     return sum;
    }   //else {
        //pali_d = false;
    //}



    


bool is_array_palindrome(int integers[], int length){

    bool pali_d = -2;
    int rev= length-1;
    if(length>0){
        if (length%2==0){
           for(int i= 0; i < (length/2)-1 ; i++){
            if (integers[i]==integers[rev]){
             //rev = (rev*10) + integers[i];
            
             pali_d = true;
            } else {
                pali_d = false;
            }
             rev--;
         } 
        } else {
            for(int i= 0; i < round(length/2) ; i++){
            if (integers[i]==integers[rev]){
             //rev = (rev*10) + integers[i];
            
             pali_d = true;
            } else {
                pali_d = false;
            }
             rev--;
        }
        }

    } else {
        pali_d = false;
    }

    return pali_d;
}

int sum_integers(int integers[], int length){

    int sum_array = 0;
    if(length>0){
    for(int i=0; i<length; i++){
        sum_array = sum_array + integers[i];
    }
    } else{
        sum_array = -1;
    }
    return sum_array;
}



