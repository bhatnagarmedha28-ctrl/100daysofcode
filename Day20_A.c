//Write a program to find the product of odd digits of a number.
#include <stdio.h>

int main() {
    int num, digit, product = 1, first = 1;
    
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Product of odd digits: ");

    while (num > 0) {
        digit = num % 10;
        if (digit % 2 != 0) {
            if (first) {
                printf("%d", digit);
                first = 0;
            } else {
                printf("*%d", digit);
            }
            product = product * digit;
        }
        num = num / 10;
    }

    printf(" = %d\n", product);

    return 0;
}
