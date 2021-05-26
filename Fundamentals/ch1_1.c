//Program to find Gross Salary; Basic Salary input from user

#include <stdio.h>
int main()
{
    int basic_sal, da, hra, gross_sal;

    printf("Enter Basic Salary: ");
    scanf("%d", &basic_sal);

    da = 0.4 * basic_sal;
    hra = 0.2 * basic_sal;

    gross_sal = basic_sal + da + hra;

    printf("The gross salary is: %d", gross_sal);
}
