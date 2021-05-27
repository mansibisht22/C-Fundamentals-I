//Program to convert kilometer to meter, feet, inch, cms

#include <stdio.h>
int main()
{
    int dist, meter, feet, inch, cms;

    printf("Enter distance in kms: ");
    scanf("%d", &dist);

    meter = dist * 1000;
    feet = dist * 3280;
    inch = dist * 39370;
    cms = dist * 100000;

    printf("KMS TO METER: %d \n", meter);
    printf("KMS TO FEET: %d \n", feet);
    printf("KMS TO INCH: %d \n", inch);
    printf("KMS TO CMS: %d", cms);
}