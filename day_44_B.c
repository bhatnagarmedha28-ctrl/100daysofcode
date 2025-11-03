//Replace spaces with hyphens in a string.
#include <stdio.h>

int main() {
    char str[1000];
    int i = 0;
    scanf("%[^\n]s", str);
    while(str[i] != '\0') {
        if(str[i] == ' ')
            str[i] = '-';
        i++;
    }
    printf("%s", str);
    return 0;
}

