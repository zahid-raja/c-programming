#include <stdio.h>

int findMax(int *ptr1, int *ptr2);

int main() {
    int num1, num2, max;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    max = findMax(&num1, &num2);

    printf("The maximum number is: %d\n", max);

    return 0;
}

int findMax(int *ptr1, int *ptr2) {
    if (*ptr1 > *ptr2) {
        return *ptr1;
    } else {
        return *ptr2;
    }
}