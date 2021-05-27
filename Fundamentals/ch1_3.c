//Program to input marks of 5 subs; find aggregate & percentage

#include <stdio.h>
int main()
{
    int maths, science, english, hindi, sst, total, perc;

    printf("Enter marks of MATHS: \n");
    scanf("%d", &maths);

    printf("Enter marks of SCIENCE: \n");
    scanf("%d", &science);

    printf("Enter marks of ENGLISH: \n");
    scanf("%d", &english);

    printf("Enter marks of HINDI: \n");
    scanf("%d", &hindi);

    printf("Enter marks of SST: \n");
    scanf("%d", &sst);

    total = maths + science + english + hindi + sst;

    perc = total / 5;

    printf("Aggregate: %d \n", total);
    printf("Percentage: %d \n", perc);
}