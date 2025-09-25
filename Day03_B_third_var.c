//Write a program to swap two numbers using a third variable.
#include <stdio.h>
int main(){
    int a, b, temp;
    printf("enter value of a: ");
    scanf("%d", &a);
    printf("enter value of b: ");
    scanf("%d", &b);
    temp = a;
    a = b;
    b = temp;
    printf("after swapping, value of a: %d\n", a);
    printf("after swapping, value of b: %d\n", b);
    return 0;
}