#include <stdio.h>
int main(){
    int i,j;
    for(i=1;i<=5;i++){
        for(j=1;j<=5;j++){
            if(j==1||j==6-i||j==i-2)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}