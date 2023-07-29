#include <stdio.h>

int main() {
    float x, y;
    char ch;
    printf("enter the number: ");
    scanf("%f", &x);
    printf("enter c for credit\n d for debit\n b for balance: ");
    scanf(" %c", &ch);

    switch (ch) {
        case 'c':
            printf("enter the credit: ");
            scanf("%f", &y);
            x = x + y;
            printf("new amount = %f", x);
            break;

        case 'd':
            printf("enter the debit amount: ");
            scanf("%f", &y);
            x = x - y;
            if (x >= y) {
                printf("new amount = %f", x);
            } else {
                printf("your amount is not sufficient");
            }
            break;

        case 'b':
            printf("amount in your account = %f", x);
            break;

        default:
            printf("choose the correct option");
            break;
    }

    return 0;
}
