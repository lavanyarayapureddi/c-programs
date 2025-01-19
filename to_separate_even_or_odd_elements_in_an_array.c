#include<stdio.h>

void main() {
    int n, i, a[10], b[10], c[10], j = 0, k = 0;
    printf("Enter the size of the array (max 10): ");
    scanf("%d", &n);

    if (n > 10) {
        printf("Error: Size exceeds maximum allowed (10).\n");
        return;
    }

    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n; i++) {
        if (a[i] % 2 == 0) {
            b[j] = a[i];
            j++;
        } else {
            c[k] = a[i];
            k++;
        }
    }

    printf("Even elements: ");
    for (i = 0; i < j; i++) {
        printf("%d ", b[i]);
    }
    printf("\n");

    printf("Odd elements: ");
    for (i = 0; i < k; i++) {
        printf("%d ", c[i]);
    }
    printf("\n");
}
