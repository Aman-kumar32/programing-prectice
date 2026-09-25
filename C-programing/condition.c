#include<stdio.h>
int main()
{
    int marks;
    printf("Enter the markes you got :");
    scanf("%d",&marks);
    if(marks>=95)
    {
        printf("You got O grade");
    }
    else if(marks>=85)
    {
        printf("You got A grade");
    }
    else if(marks>=75)
    {
        printf("You got B grade");
    }
    else if(marks>=65)
    {
        printf("You got C grade");
    }
    else if(marks>=40)
    {
        printf("You got D grade");
    }
    else
    {
        printf("You got F grade");
    }
}