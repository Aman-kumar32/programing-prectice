//read three integers from the user and print the largest one
#include <stdio.h>
int main()
{
    int a, b, c, largest;
    printf("Enter 1st integer: ");
    scanf("%d", &a);
    printf("Enter 2nd integer: ");
    scanf("%d", &b);
    printf("Enter 3rd integer: ");
    scanf("%d", &c);
    largest = a;
    if (b > largest)
        largest = b;
    if (c > largest)
        largest = c;
    printf("The largest integer is: %d\n", largest);
    return 0;
}