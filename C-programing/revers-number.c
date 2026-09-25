#include<stdio.h>
int main()
{
    int num,digit,reverse=0;
    printf("Enter the number :");
    scanf("%d",&num);
    while(num!=0)
    {
        digit=num%10;
        reverse=reverse*10+digit;
        num=num/10;
        printf("Reverse of the number is :%d\n",reverse);

    }
    printf("\n Reverse of number = %d",reverse);
    return 0;
}