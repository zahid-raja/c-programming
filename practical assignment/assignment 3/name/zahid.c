#include <stdio.h>
#include <string.h>

int main() {
    char name[] = "ZAHID RAJA";
    int len = strlen(name);

    // Each letter is 5 rows tall
    for (int row = 0; row < 5; row++) {
        for (int i = 0; i < len; i++) {
            char ch = name[i];
            if (ch == ' ') {
                printf("     "); // space between words
                continue;
            }

            switch(ch) {
                case 'Z':
                    if (row==0 || row==4) printf("*****");
                    else if (row==1) printf("   * ");
                    else if (row==2) printf("  *  ");
                    else printf(" *   ");
                    break;
                case 'A':
                    if (row==0) printf(" *** ");
                    else if (row==1) printf("*   *");
                    else if (row==2) printf("*****");
                    else printf("*   *");
                    break;
                case 'H':
                    if (row==2) printf("*****");
                    else printf("*   *");
                    break;
                case 'I':
                    if (row==0 || row==4) printf("*****");
                    else printf("  *  ");
                    break;
                case 'D':
                    if (row==0 || row==4) printf("**** ");
                    else printf("*   *");
                    break;
                case 'R':
                    if (row==0) printf("**** ");
                    else if (row==1) printf("*   *");
                    else if (row==2) printf("**** ");
                    else if (row==3) printf("*  * ");
                    else printf("*   *");
                    break;
                case 'J':
                    if (row==0) printf("*****");
                    else if (row==4) printf("***  ");
                    else printf("   * ");
                    break;
                default:
                    printf("     ");
            }
            printf("  "); // spacing between letters
        }
        printf("\n");
    }

    return 0;
}