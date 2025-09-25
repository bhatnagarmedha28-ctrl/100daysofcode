//WAP a C program to Convert temperature from Celsius to Fahrenheit. 
#include <stdio.h>
int main(){
    float cel , fah;
    printf("enter temperature in degree celsius:  ");
    scanf("%f", & cel);
     fah= ( cel * 9/5) + 32;
     printf("Fahrenheit temp = %.2f", fah);
     return 0;
     
}