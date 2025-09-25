//Q7: Write a program to swap two numbers without using a third variable.
#include <stdio.h>
int main(){
    int a, b;
    printf("enter value of a: ");
    scanf("%d", &a);
    printf("enter value of b: ");
    scanf("%d", &b);
    
    a = a + b; 
    b = a - b; 
    a = a - b; 
    
    printf("after swapping, value of a: %d\n", a);
    printf("after swapping, value of b: %d\n", b);
    return 0;
}