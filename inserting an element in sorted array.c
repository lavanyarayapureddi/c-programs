#include <stdio.h>

void main() {
    int arr[100], n, i, value, pos;

    
    printf("Enter the number of elements in the sorted array (max 100): ");
    scanf("%d", &n);

    
    if (n < 0 || n >= 100) {
        printf("Invalid size! Please enter a size between 0 and 100.\n");
        return;
    }

    
    printf("Enter %d elements in sorted order:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    
    printf("Enter the value to insert: ");
    scanf("%d", &value);

    
    pos = n; // Default position is at the end
    for (i = 0; i < n; i++) {
        if (arr[i] > value) {
            pos = i;
            break;
        }
    }

    
    for (i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    
    arr[pos] = value;

    
    n++;

    
    printf("The array after inserting %d is:\n", value);
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
