#include <stdio.h>

int main() {
int x = 5, y, z;
y = ++x;
x = 5;
z = x++;

printf("Pre-increment (++x):\n");
printf("After y = ++x; x=%d, y = %d\n\n", x, y);

printf("post-increment (x++):\n");
printf("Post-increment (x++):\n"); printf("After z = x++; x = %d, z = %d\n", x, z);

return 0;
}