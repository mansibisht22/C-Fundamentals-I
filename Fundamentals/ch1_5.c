// Program to find AREA & PERIMETER of rectangle
// Program to find AREA & CIRCUMFERENCE of circle

#include <stdio.h>
int main()
{
    float l, b, rect_area, peri;

    printf("Enter Length & Breadth of rectangle: ");
    scanf("%f %f\n", &l, &b);


    rect_area = l * b;
    peri = 2 * (l + b);

    printf("AREA OF RECTANGLE: %f \n", rect_area);
    printf("PERIMETER OF RECTANGLE: %f \n", peri);
}