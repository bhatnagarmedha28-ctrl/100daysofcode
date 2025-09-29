// Write a program to find the 1’s complement of a binary number and print it.
#include <stdio.h>

int main() {
    long binary, temp;
    int digits[32]; 
    int i = 0, j;

    printf("Enter a binary number: ");
    scanf("%ld", &binary);

    temp = binary;

    while (temp > 0) {
        digits[i] = temp % 10;
        if (digits[i] != 0 && digits[i] != 1) {
            printf("Invalid binary number.\n");
            return 1;
        }
        temp = temp / 10;
        i++;
    }

    printf("1's complement: ");

    for (j = i - 1; j >= 0; j--) {
        if (digits[j] == 0)
            printf("1");
        else
            printf("0");
    }

    printf("\n");

    return 0;
}

