//Finding cost price; selling price & profit is input

#include <stdio.h>
int main()
{
    int sp, prft, cp;

    printf("Enter TOTAL selling price of 15 items: \n");
    scanf("%d", &sp);
    printf("Enter TOTAL profit of 15 items: \n");
    scanf("%d", &prft);
    cp = sp-prft;

    printf("the COST PRICE of 15 items is: %d \n", cp);
    printf("the COST PRICE of 1 item is: %d \n", cp/15);
}