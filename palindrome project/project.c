#include <stdio.h>
#include <string.h>
// string se jure hue function ke liy

/* Function to check palindrome number */
void palindromeNumber() {
    int num, rev = 0, rem, temp;   /*reverse no 0 se start hoga or rem remainder hai(last digit) */
    // temp orignal number ko surakhtit rkhega

    printf("\nEnter a number: ");
    scanf("%d", &num);
// to take number from user side 

    temp = num;
    // temp=num hmne number ko temp me save kr liya kyuki number
    // loop me badal jayga


    while (num > 0) {
        rem = num % 10;           /*number la last digit nikalne ke liy*/ 
        rev = rev * 10 + rem;    /*yeh number ko reverse bnayga*/
        num = num / 10;         /*yeh last digit ko htayga*/ 
    }

    if (temp == rev)      /*ye orignal or reverse no ko compare krega*/
        printf("Result: Number is Palindrome\n");   /*agar dono braber hoga*/
    else
        printf("Result: Number is NOT Palindrome\n");   /*agar braber n ho to*/
}

/* Function to check palindrome string */
void palindromeString() {
    char str[50];
    int i, len, flag = 0;
    /*flag mismatch check krne ke liy or len string ki length*/

    printf("\nEnter a string: ");
    scanf("%s", str);

    len = strlen(str);     /*string ki length nikalne ke liy*/

    for (i = 0; i < len / 2; i++) {     /*aadhi string tk hi length ko chlayenge qki aage piche compare krna hai*/
        if (str[i] != str[len - i - 1]) {   /*first or last chr ko compare krenge*/
            flag = 1;
            break;     /*agar koi chr match nhi kiya to loop rok denge*/
        }
    }

    if (flag == 0)   /*agar koi mismatch nhi hua to*/
        printf("Result: String is Palindrome\n");
    else            /*koi mismatch hua to*/
        printf("Result: String is NOT Palindrome\n");
}

int main() {
    int choice;     /*user ki choice store krayenge*/
          /*ye ab menu dikhane ke liy user ko*/
    printf("===== Palindrome Checker Project =====\n");
    printf("1. Check Palindrome Number\n");
    printf("2. Check Palindrome String\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);    /*user choice krega*/

    if (choice == 1)     /*1 choose kiya to no wala function chalega*/
        palindromeNumber();
    else if (choice == 2)   /*string wala function chalega*/
        palindromeString();
    else
        printf("Invalid Choice!");  /*koi or no choose kiya to*/

    return 0;
}