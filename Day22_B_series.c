//Q43: Write a program to calculate the sum of the series 1/2 + 3/4 + 5/6 + ... n terms.
#include <stdio.h>

int main() {
    int n, i;
    float sum = 0.0;
    int num = 1, den = 1;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        sum = sum + (float)num / den;
        num = num + 2;
        den = den + 2;
    }

    printf("Approximate sum: %.1f", sum);
    return 0;
}
