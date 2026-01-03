#include <stdio.h>
int factorial(int *a,int fact){
    for(int i=2;i<=*a;i++){
        fact *= i;
    }
    return fact;
}

int main(){
    int x;
    printf("Enter your number: ");
    scanf("%d",&x);
    printf("Factorial of given number is: %d\n",factorial(&x,1));
    return 0;
}