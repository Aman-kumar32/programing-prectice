#include<stdio.h>
int main()
{
    float area, radius;
    printf("Enter the area of the circle: ");
    scanf("%f", &area);
    radius = sqrt(area / 3.14);
    printf("The radius of the circle is: %.2f\n", radius);
    return 0;
}