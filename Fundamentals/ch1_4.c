// Program to convert Fahrenheit to Celcius

#include <stdio.h>
int main()
{
    float fah, cel;

    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fah);

    cel = 5*(fah-32)/9;
    printf("Temperature in Celcius: %f", cel);
}
