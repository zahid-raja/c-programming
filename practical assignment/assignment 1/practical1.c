#include <stdio.h>
int main() {

int a = 5;
float b = 2.12f;
char c = 'A';
double d = 23.123;

printf("Value of int: %d, Size: %zu bytes\n", a, sizeof a);
printf("Value of float: %.2f, Size: %zu bytes\n", b, sizeof b);
printf("Value of char: %c, Size: %zu bytes\n", c, sizeof c);
printf("Value of double: %1f, Size: %zu bytes\n", d, sizeof d);

return 0;
}