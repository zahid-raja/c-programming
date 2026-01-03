#include<stdio.h>
int main() {

float acb1, acb2;

printf("Enter two account balances: ");

scanf("%f %f", &acb1, &acb2);

printf("Are they equal?         %d\n", acb1 == acb2);
printf("Is first greater?       %d\n", acb1 > acb2);
printf("Is second greater?      %d\n", acb2 > acb1);

return 0;
}