#include <stdio.h>
int main(){
    int i,j;
    for(i=1;i<=5;i++){
        for(j=1;j<=5;j++){
            if((j==i&&i>2)||(j==6-i&&i>2))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}