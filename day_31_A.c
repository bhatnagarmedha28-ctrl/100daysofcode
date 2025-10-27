// Search for an element in an array using linear search.

#include <stdio.h>
int main() {
    int n, i, target, foundIndex = -1;

    
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &target);

    for(i = 0; i < n; i++) {
        if(arr[i] == target) {
            foundIndex = i;
            break;
        }
    }

    if(foundIndex != -1) {
        printf("Found at index %d\n", foundIndex);
    } else {
        printf("-1\n");
    }

    return 0;
}