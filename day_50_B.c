//Q100: Print all sub-strings of a string.

/*
Sample Test Cases:
Input 1:
abc
Output 1:
a,ab,abc,b,bc,c

*/
#include <stdio.h>
int main() {
    char str[1000];
    scanf("%[^\n]s", str);
    int i, j, k;
    for(i = 0; str[i] != '\0'; i++) {
        for(j = i; str[j] != '\0'; j++) {
            for(k = i; k <= j; k++) {
                printf("%c", str[k]);
            }
            printf(",");
        }
    }
    return 0;
}