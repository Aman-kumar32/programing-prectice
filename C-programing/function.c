#include<stdio.h>
void greet() {//it's call the function thats under greet(). we can call a function as many as we want in the main function.
    int a=8,b=45;
    int sum;
    sum=(a+b);
    printf("the sum is:%d\n",sum);

    printf("Hello, World!\n");
}
int main()
{
    int a=8,b=19;
    int average;
    average=(a+(int)b)/2;
    printf("the average is:%d\n",average);

    average=(a+(int)b)/2;
    printf("the average is:%d\n",average);
     
    average=(a+(int)b)/2;
    printf("the average is:%d\n",average);


    greet();//this executes or invokes the function greet() which prints "Hello, World!" to the console.
    greet();//this executes or invokes the function greet() which prints "Hello, World!" to the console.

    
    return 0;
}