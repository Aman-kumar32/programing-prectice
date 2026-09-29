#include<stdio.h>
void greet();// Function declaration
int sum(int a, int b);// Function declaration

int main(){
    greet();
    printf("Sum of 5 and 10 is: %d\n", sum(5, 100));
    return 0;
}

//function definition
void greet(){
    printf("Hello, World!\n");
}
//function definition
int sum(int a, int b){
    int sum = a + b;
    return sum;
}