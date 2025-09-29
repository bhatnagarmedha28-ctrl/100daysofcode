//Write a program to find the sum of digits of a number.
#include <stdio.h>
int main() {
    int n, sum = 0, remainder;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Error! Please enter a positive integer.\n");
        return 1;
    }

    while (n != 0) {
        remainder = n % 10; 
        sum += remainder; 
        n /= 10; 
    }

    printf("Sum of digits: %d\n", sum);
    return 0;
}
