//Q64: Find the digit that occurs the most times in an integer number.
#include <stdio.h>
int main() {
    int number, digitCount[10] = {0}, maxCount = 0, mostFrequentDigit = -1;

    printf("Enter an integer number: ");
    scanf("%d", &number);

    
    if (number < 0) {
        number = -number;
    }

    if (number == 0) {
        digitCount[0]++;
    } else {
        while (number > 0) {
            int digit = number % 10;
            digitCount[digit]++;
            number /= 10;
        }
    }

    for (int i = 0; i < 10; i++) {
        if (digitCount[i] > maxCount) {
            maxCount = digitCount[i];
            mostFrequentDigit = i;
        }
    }

    printf("The digit that occurs the most is: %d (occurs %d times)\n", mostFrequentDigit, maxCount);

    return 0;
}