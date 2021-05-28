// Program to swap numbers

#include <stdio.h>
int main() {
    int a, b, x;

    printf("enter first no.: ");
    scanf("%d", &a);

    printf("enter second no.: ");
    scanf("%d", &b);

    x = a;
    a = b;
    b = x;

    printf("%d \n", a);
    printf("%d \n", b);
    
}