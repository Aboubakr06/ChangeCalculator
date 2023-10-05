#include <stdio.h>

int main()
{
    int total, money, change;

    printf("Please enter the total amount to be paid: ");
    scanf("%d", &total);

    printf("\nPlease enter the amount of money you are providing: ");

    do {
        scanf("%d", &money);
        if (money <= 0) {
            printf("Please enter a positive amount: ");
        }
    } while (money <= 0);

    change = money - total;

    while (change < 0)
    {
        printf("Insufficient payment. Please add %d$ to cover the bill.\n", change * -1);
        printf("Enter additional funds: ");

        do {
            scanf("%d", &money);
            if (money <= 0) {
                printf("Please enter a positive amount: ");
            }
        } while (money <= 0);

        change += money;
    }

    if (change == 0)
    {
        printf("Thank you! Your payment is exact, and there is no change due.\n");
    }
    else if (change > 0 && change < money)
    {
        printf("Your change is %d$. Please collect your change.\n", change);
    }

    return 0;
}
