// Write a C program to add two numbers, take number from user. User should give input.


#include <stdio.h>
int main(){
    int num1 , num2;
    printf("enter a number ");
    scanf("%d", &num1);
    printf("enter another number ");
    scanf("%d", &num2);

    int sum= num1 + num2;
    printf("sum = %d", sum);
    return 0;
}