#include<stdio.h>

void main() {
    int a1, a2, n, roll_number, d;
    printf("Enter the roll number of the 1st student (a[1]): ");
    scanf("%d", &a1);
    printf("Enter the roll number of the 2nd student (a[2]): ");
    scanf("%d", &a2);
    printf("Enter your position (n) among the 1000 students: ");
    scanf("%d", &n);
    if (n < 1 || n > 1000) {
        printf("Invalid position. Please enter a value between 1 and 1000.\n");
        return;
    }
    d = a2 - a1;
    roll_number = a1 + (n - 1) * d;
    printf("The roll number of the %dth student is: %d\n", n, roll_number);
}
