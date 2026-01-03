#include <stdio.h>
int swap(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
    printf("After Swapping: %d %d\n",*a,*b);
    return 0;
}

int main(){
    int x,y;
    printf("Enter two numbers: ");
    scanf("%d %d",&x,&y);
    printf("Before Swapping: %d %d\n",x,y);
    swap(&x,&y);
    return 0;
}
