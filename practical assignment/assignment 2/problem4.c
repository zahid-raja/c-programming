#include <stdio.h>
int main(){
float balance;

printf("Enter initial bank balance: ");
scanf("%f", &balance);

balance += 500.0;
printf("After adding interest (+500): %.2f\n", balance);

balance -= 200.0;
printf("After deducting charges (-200): %.2f\n", balance);

balance *= 1.10;
printf("After adding bonus (*1.10): %.2f\n", balance);

balance /= 2.0;
printf("After division (/2): %.2f\n", balance);

return 0;
}