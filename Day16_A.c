//write a program to take a number as input and print its equivalent binary representation.
#include <stdio.h>
int main() {
    int n, binary[32], i = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Error! Please enter a positive integer.\n");
        return 1;
    }

    if (n == 0) {
        printf("Binary representation: 0\n");
        return 0;
    }

    while (n > 0) {
        binary[i] = n % 2; 
        n = n / 2; 
        i++;
    }

    printf("Binary representation: ");
    for (i = i - 1; i >= 0; i--) {
        printf("%d", binary[i]);
    }
    printf("\n");

    return 0;
}

