//Q41: Write a program to swap the first and last digit of a number.
#include <stdio.h>

int main() {
    int num, temp, last, first, power = 1;
    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;
    last = num % 10;

    while (temp >= 10) {
        temp = temp / 10;
        power = power * 10;
    }

    first = temp;
    num = num % power;
    num = num / 10;
    int swapped = last * power + num * 10 + first;

    printf("Number after swapping first and last digit: %d", swapped);
    return 0;
}
