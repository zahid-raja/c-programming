#include <stdio.h>
int add(int *a, int *b) {
    return *a + *b;
}
int subtract(int *a, int *b) {
    return *a - *b;
}

int multiply(int *a, int *b) {
    return *a * *b;
}

int divide(int *a, int *b) {
    if(*b!=0){
        return *a / *b;
    }
    else{
        return 0;
    }    
}

int main() {
    int x,y;
    printf("Enter two numbers: ");
    scanf("%d %d",&x,&y);
    int choice = 1;
    while (choice != 0) {
        printf("\n====Calculator====\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Sum: %d\n",add(&x,&y));
                break;

            case 2:
                printf("Difference: %d\n",subtract(&x,&y));
                break;

            case 3:
                printf("Difference: %d\n",subtract(&x,&y));
                break;

            case 4:
                printf("Division: %d\n",divide(&x,&y));
                break;
            
            default:
                printf("Invalid Choice");
                break;
        }
        return 0;
}
}
