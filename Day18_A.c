// Write a program to print all factors of a given number.
#include <stdio.h>
int main() {
    int n, i;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Error! Please enter a positive integer.\n");
        return 1;
    }

    printf("Factors of %d are:\n", n);
    for (i = 1; i <= n; i++) {
        if (n % i == 0) {
            printf("%d\n", i);
        }
    }

    return 0;
}